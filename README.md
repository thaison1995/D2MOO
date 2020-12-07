# D2MOO - Diablo II Method and Ordinal Overhaul

![Cow](ECWLHTH.gif)

This project is a re-implementation of the Diablo2 game coupled with patching facilities for modders.
The aim is to provide the modding community with an easy tool to understand and patch the game.
To ensure that we stay as close as possible to the original game, we do not provide fixes for bugs (yet).

The game assets, main executable code and anything related to hacking or piracy is NOT endorsed by the authors, and as such we will not provide code related to such subjects.
The original game assets and binaries is required to use this project.

## How to build

### Dependencies

For the patching we rely on the [D2.Detours](https://github.com/Lectem/D2.Detours.git) project, which is included as a git submodule. (use the `git submodule update --init` command, or clone this project with `git clone --recursive`)
You will also need to install the [CMake](https://cmake.org) build system and Visual C++ (or any C++ compiler that can generate .DLLs on Windows) which are freely available.

### Build the project

In the current directory:

```sh
# Configure the CMake project
cmake -A Win32 -B build
# Build the release config
cmake --build build --config Release
# Install
cmake --install build --config Release --prefix YOUR_INSTALL_FOLDER
```

## Usage

- Build D2MOO
- Launch Diablo2 (or D2SE) by using the command `D2.DetoursLauncher [Path to D2 or D2SE]`.
  - If the `Game.exe`/`D2SE.exe` executable is not provided, you can start it from the game folder. It can also detect the installation path.
  - The detours .dll expects patch dlls to be in `patch` folder of the *Diablo2*/*D2SE* executable. This can be overriden using the `DIABLO2_PATCH` environment variable.

The debug targets are already configured and set as startup project when using Visual Studio.

## Versions

The project is currently based on the 1.10f version of the game.
Feel free to submit patches for other versions of the game!

## FAQ

### Why is the code so ugly and with names such as `a1`, `a2`, ... ?

The code was originally extracted by a reverse engineering tool, and slowly cleaned to use understandable names

### Can I build D2Common.dll and replace it directly with the one from the game ?

Not yet, but this is one of the objectives !
We are in the (slow) process of checking each ordinal (exported functions) and patching them one by one. See [D2Common.patch.cpp](D2.Detours.patches/1.10f/D2Common.patch.cpp) for the current status of each ordinal.

### Why is there only D2Common.dll ?

Because it contains a lot of functions that are used in both, client and server code, and as such, it serves as a solid base for further work.  
We might add other DLLs in the future if there is enough interest / help from the community. Any contributions are welcome.

### How can I write my own mod using this ?

The documentation for that is not written yet, please contact us directly on the Phrozen Keep [forums](https://www.d2mods.info) / [Discord server](https://discord.gg/NvfftHY).
More importantly, we need your feedback to determine a roadmap.

### Why yet another project for D2 modding and code editing ?

We felt that the current projects are not good enough, and more importantly did not cover enough parts of the game.
Having a centralized code that one can launch and use as reference will make it easier, we hope, for the modding community.

### I have other questions !

Please feel free to open an issue or visit the Phrozen Keep [forums](https://www.d2mods.info) / [Discord server](https://discord.gg/NvfftHY) !


## Credits

This could not have been done without the amazing help and work of the Phrozen Keep community!
Non-exhaustive list of members who helped putting this together (alphabetical order):

 * @FearedBliss
 * @Firehawk
 * @Kingpin
 * @Lectem
 * @lolet
 * @Mentor
 * @misiek1294
 * @Mnw1995
 * @Myhrginoc
 * @Necrolis
 * @Nefarius
 * @Ogodei
 * Paul Siramy
 * @raler (that sparked the idea for the current name of the project)
 * @SVR
 * @Szumigajowy
 * @whist
 * ...

If you think you should be on this list, reach us on the forum, discord, or open a pull request!

## Legal


The source code in this repository is intended for non-commercial use only. However it uses a permissive license so that any modder may use this. Credits to the team are appreciated, and the license must be preserved in derivative work.

Battle.net(R) - Copyright (C) 1996 Blizzard Entertainment, Inc. All rights reserved. Battle.net and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.

Diablo(R) - Copyright (C) 1996 Blizzard Entertainment, Inc. All rights reserved. Diablo and Blizzard Entertainment are trademarks or registered trademarks of Blizzard Entertainment, Inc. in the U.S. and/or other countries.

D2MOO and any of its' maintainers are in no way associated with or endorsed by Blizzard Entertainment(R).

