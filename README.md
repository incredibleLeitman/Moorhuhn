# Moorhuhn
Moorhuhn remake in UE4, students project for @fh-technikum-wien in GEE (game engine based development)

![Moorhuhn Remake Title](https://github.com/incredibleLeitman/Moorhuhn/blob/main/screenshot.png "Moorhuhn Remake Title")

Download the latest version from dropbox:

https://www.dropbox.com/sh/9t0uqydfu9au076/AAAJ5DATTH-B6DjcTlfHbkWZa?dl=0

## Controls

Classic FPS controls, move around with WASD, space to jump, move the crosshair with mouse. Left mouse button to shoot, right click to reload.

Reload is only possible if at least on bullet was shot, while reloading, shooting is permitted.

## Gameplay

The player has 90 seconds to shoot targets and receive points, which are displayed in the highscore list.

Hitting enemies in the frontline is rewarded with 25 points, enemies that are far with 35 points. It is possible to hit a targe multiple times for additional points.


# Dev Area

## Done

- basic menue
- sceen shake
- basic ammo system and reload
- timer
- score system
- actual moving enemies
- spawner and behavior
- stop / remove game(mode)/map? to prevent further EventTicks? --> set bool @finish -> load level resets state
- music and sound
    - menue button
    - bg music
    - countdown
    - hit + death scream
- sort highscores and mark last game (TODO: fix ListView addItem)
- level mesh


## improvements

- "correctly" close map and open score entry
- enter name after play (currently random playertag)
- add random encounter for more points
- animate shoot and reload system by showing cells
- disintegration particle system at hit
- pause menue?
- weapon recoil
- combo points for re-hits
- show points at hit
- day-night cycle
- use of nice enemy assets:
    - add custom models and animation for Moorhuhn and/or crazy chicken
    - rng cock for extra points
    - scarecrow for some more extra points
    - classic windmill?
    - castle
- HTML5 export
    - https://github.com/UnrealEngineHTML5/UnrealEngine/tree/4.24.3-html5-1.39.18/Engine/Platforms/HTML5
    - https://github.com/UnrealEngineHTML5/Documentation/blob/master/Platforms/HTML5/HowTo/README.md


## open issues
- Highscores: AddListViewItem; seems to add elements, get per method using space, but does not show anything (maybe invisible or wrong z-order?)
- setting values for game mode (GameRunning): allowed, gets called, but does not change the value? (maybe a reset or another instance?)
- Lightning seems to do anything but behaving correctly as set
