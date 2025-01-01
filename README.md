# SquareLine LilyGo T-Panel Starter Project

A minimal working project combining SquareLine Studio and PlatformIO for the
[LilyGo T-Panel](https://lilygo.cc/products/t-panel-s3) board.

## Quick Start: Build

To build the project and flash it onto a T-Panel board:

- clone this repo
- install VSCode
- install the [PlatformIO plugin in VSCode](https://platformio.org/install/ide?install=vscode)
- add this folder to your VSCode workspace
- build using PlatformIO. It should succeed with no errors.
- plug in your T-Panel board and select Upload using PlatformIO.

The example UI should now appear on your T-Panel display.

## Editing the UI

To edit the UI:

- install [SquareLine Studio](https://squareline.io/downloads)
- open SquareLine Studio, in the Open tab, select Import Project at the bottom
- select the .spj file from `squareline_project/` in this repo
- make changes to the UI
- select Export -> Export UI Files. You should be prompted to select the export location.
- select the directory `src/ui` in this repo
- the UI files will be updated

You can now rebuild and upload the project in VSCode / PlatformIO,
and your changes should appear on your T-Panel display.

## Notes

This project was created to help you get started with SquareLine Studio
and PlatformIO for the LilyGo T-Panel. I could not find any guides
for that particular combination and I found it difficult to get started.

This project was derived from https://github.com/Xinyuan-LilyGO/T-Panel
with the addition of a simple example SquareLine Studio project.

If you see any errors or have any suggestions please raise an issue
in github.
