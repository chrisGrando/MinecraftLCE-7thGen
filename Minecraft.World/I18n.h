#pragma once
using namespace std;

#include "stdafx.h"
#include "Language.h"

class I18n
{
private:
	static Language *lang;

#if defined(_XBOX) || defined(__PS3__) || defined(__PSVITA__)
public:
    static wstring get(const wstring& id, ...);
	static wstring get(const wstring& id, va_list args);
};
#else
public:
	template<typename ...Args>
	static wstring get(Args... args)
	{
		return lang->getElement(std::forward<Args>(args)...);
	}
};
#endif