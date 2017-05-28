# What is AyyTux?

AyyTux is a fork of AimTux, precisely of AimTux-Fuzion. This is my attempt at pasting and adding stuff in.
AimTux is a fully featured internal hack for *CounterStrike : Global Offensive* written in C++.

## Compiling

**Note:** _Do NOT download or compile as the root user_

### Download the dependencies required to build AyyTux:

If you're having problems compiling make sure you've got the latest version of `g++`.
[How to update g++](https://github.com/AimTuxOfficial/AimTux/wiki/Updating-your-compiler)

────────────────────────────────────────────────────────────────────────────────
__Ubuntu-Based / Debian:__
```bash
sudo apt-get install cmake g++ gdb git libsdl2-dev zlib1g-dev
```
__Arch:__
```bash
sudo pacman -S base-devel cmake gdb git sdl2
```
__Fedora:__
```bash
sudo dnf install cmake gcc-c++ gdb git libstdc++-static mesa-libGL-devel SDL2-devel zlib-devel
```

__Gentoo:__
```bash
sudo emerge cmake dev-vcs/git gdb libsdl2 mesa
```
────────────────────────────────────────────────────────────────────────────────

### Download AyyTux:

```bash
git clone --recursive https://github.com/GreenByteSoftware/AyyTux
```

```bash
cd AyyTux
```
### Compile with build script:

You can build easily with the included build script.

```bash
./build
```
You can later update with
```bash
./update
```
## Injecting

First of all, make sure CSGO is open, it doesn't matter whether you're in game or not.

Navigate to the directory where AyyTux was built if you haven't ready.

```bash
cd AyyTux
```
Now, you can inject the hack with the `load` script

```bash
./load
```
You might be prompted to enter in your password, this is because the injection script requires root access.

You should see a lot of text being printed out, most of which is not important,

If the injection was successfull you'll see a message at the bottom saying `Successfully injected!`, however, if the message says `Injection failed`, then you've most likely done something wrong.

Now, go back into CSGO, if you're in the main menu of the game you should see the AyyTux banner in the top left.

## Using the hack

Now that AyyTux has been injected into the game, press <kbd>Insert</kbd> on your keyboard to open the hack menu (<kbd>ALT</kbd>+<kbd>I</kbd> if you're using a laptop).

If you want to change skins, create and load configs or open the player list, you can find those buttons at the top of the screen.

## Unloading the hack

If you wish to unload the hack from the game, you can do so by entering the command:

```bash
./uload
```
## Configs

Configs are stored in a hidden directory in your home folder. Specifically 

```bash
~/.config/AyyTux
```
Each `config.json` is stored in a seperately named folder (The name you see in-game, in the config window). 

To add a config, create a folder inside of the `~/.config/AyyTux` folder with a name of your choice, and paste the `config.json` inside of that folder.

To see hidden folders inside your home folder, press <kbd>CTRL</kbd>+<kbd>H</kbd> when using a file manager.

## Grenade Configs

```bash
~/.config/AyyTuxGH
```

Each `config.json` is stored in the folder named after them map name.

To add a config, copy the folder containing it to `~/.config/AyyTuxGH`

## Screenshots

Soon.

## Credits
Special thanks to [@McSwaggens](https://github.com/McSwaggens) for initiating the Original AimTux project (https://github.com/AimTuxOfficial/AimTux).
Special thanks to all the contributors since the beginning.

Special thanks to [@aixxe](https://www.github.com/aixxe/) ([aixxe.net](http://www.aixxe.net)) for the skin changer and with the initial project, as well as helping this project with source code (Available on [@aixxe's](https://www.github.com/aixxe/) github page.)

This project was also originally based upon Atex's [Linux Basehook](http://unknowncheats.me/forum/counterstrike-global-offensive/181878-linux-basehook.html).
