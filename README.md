# Minecraft LCE for Xbox 360, PS3 and PSVita

## About

This is the original and (almost) untouched leaked source code of Minecraft Legacy Console Edition.
The goal of this repository is to keep it able to build for the 7th Generation Consoles (Xbox 360, PS3 and PSVita).

Feel free to open a pull request to fix any issue in the source code. However, I won't accept any that adds new
features or that breaks Xbox 360 / PS3 / PSVita builds.

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
> Building for Xbox One, PS4 and 32-bit Windows was NOT tested!

### Requirements
1. Visual Studio 2012 Professional (or Ultimate)
2. Windows 10 SDK
3. (Consoles ONLY) SDK of Xbox One / PS4

### Build

1. Open `MinecraftPC.sln` on VS2012.
2. Set configuration to `Release`.
3. Set platform to the one you wish to build it for (x86, x64, Durango, Orbis).
4. On the top bar, select `Build -> Build Solution`.
