# Minecraft LCE for Xbox 360, PS3 and PSVita

## About

This is the original and (almost) untouched leaked source code of Minecraft Legacy Console Edition.
The goal of this repository is to keep it able to build for the 7th Generation Consoles (Xbox 360, PS3 and PSVita).

## Help Needed

I also wanted to add support for Windows (32 and 64 bits), Xbox One and PS4 builds, but due to incompatibilities
across IDEs, I wasn't able to do it without breaking the builds for Xbox 360, PS3 and PSVita (which ARE the main
goal here). 

If you know how to fix those issues, you're more than welcome to create a **pull request**. The only thing I ask is to
keep the source code as close as possible to the original.

Pull requests to fix issues on Xbox 360, PS3 and PSVita builds are accepted as well, but adding new features aren't.

## Building for the 7th Generation

### Requirements

1. Visual Studio 2010 Professional
2. DirectX 9c SDK
3. SDK of Xbox 360 / PS3 / PSVita

### Build

1. Open `MinecraftConsoles.sln` on VS2010.
2. Set configuration to `Release`.
3. Set platform to the one you wish to build it for (Xbox 360, PS3 or PSVita).
4. On the top bar, select `Build -> Build Solution`.

## Building for PC and 8th Generation

> [!CAUTION]
> Currently broken.

### Requirements
1. Visual Studio 2019
2. Desktop C++ Development Tools
3. Windows 10 SDK
4. (Consoles ONLY) SDK of Xbox One / PS4

### Build

1. Open `MinecraftPC.sln` on VS2019.
2. Set configuration to `Release`.
3. Set platform to the one you wish to build it for (x86, x64, Durango, Orbis).
4. On the top bar, select `Build -> Build Solution`.
