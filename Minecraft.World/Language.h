#pragma once

#if !defined(_XBOX) && !defined(__PS3__) && !defined(__PSVITA__)
#include <string>
#endif

class Language
{
private:
	static Language *singleton;
public:
	Language();
    static Language *getInstance();
#if defined(_XBOX) || defined(__PS3__) || defined(__PSVITA__)
    wstring getElement(const wstring& elementId, ...);
	wstring getElement(const wstring& elementId, va_list args);
    wstring getElementName(const wstring& elementId);
    wstring getElementDescription(const wstring& elementId);
#else
    template<typename...Args>
    inline std::wstring getElement(const std::wstring& elementId, Args...)
    {
        return elementId;
    }
    std::wstring getElementName(const std::wstring& elementId);
    std::wstring getElementDescription(const std::wstring& elementId);
#endif
};