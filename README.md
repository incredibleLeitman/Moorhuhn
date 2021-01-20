# Moorhuhn
Moorhuhn remake in UE4, students project for @fh-technikum-wien in GEE (game engine based development)

![Moorhuhn Remake Title](https://github.com/incredibleLeitman/Moorhuhn/blob/main/screenshot.png "Moorhuhn Remake Title")

Download the latest version from dropbox:

https://www.dropbox.com/sh/9t0uqydfu9au076/AAAJ5DATTH-B6DjcTlfHbkWZa?dl=0

## Fullfilled requirements and features

- User-controllable character
    standard FPS character, WASD movement + space to jump, mouse controlled crosshair: left click to shoot, right click to reload
    uses a hitscan at the current mouse cursor poisition to detect hit

- AI-controlled pawns/characters
    - Moorhühner are spawned from EnemySpawner, controlled by AI-Controller;
    - Behavior Trees are not applicable thus every Enemy has a set of movement patterns

- Map/level
    - Menue system: main menue connected to highscores and level
    - Main level: floating rock in a 3D environment; charactes is spawned within a not passable area where movement is allowed;
      Usage of Sky Sphere and Light for global illumination and mood; extra directional lights setup to illuminate player area and map;
      Contains a FPS HUD which displays remaining time, ammunition and scored points realised with UMG; Draw custom crosshair including hit marker;
      Also implemented a screenshake after each shot and a restriction for spamming

- Custom models and materials
    - use of different materials for background environment; player character weapon and enemies;
    - because animation for custom Moorhuhn didn't work, walking animation for starter package Mannequin was used

- Used external content
    - Particle system for muzzle flash from Sci-fi Gun Pack by Quaternius (https://www.patreon.com/posts/free-sci-fi-gun-18871201)
    - Particle system for explosions at enemy hit from UE4 infiltrator Demo (https://www.unrealengine.com/marketplace/en-US/product/infiltrator-demo)
    - Environment such as mountains, plateaus, trees and billboards from UE4 infiltrator demo
    - Moorhuhn created by Marlene (https://twitter.com/Merlar98)
    - Crazy chicken created by Jorge Rodrigues (https://www.artstation.com/artwork/4bdZz8)
    - sounds and music mostly from original moorhuhn game (https://store.steampowered.com/app/340120/Moorhuhn_Crazy_Chicken)
        additional sounds from weloveindies.com using student licence
    - Moorhuhn remastered menue background image

- Realization of logic through blueprints
    - BP_GameMode for gameloop
    - BP_FPS_Character implements game mechanics
    - BP_Camera Shake so add firing feedback
    - BP_Moorhuhn reacts to hits, plays animations and sounds; destroy itself
    - BP_Moorhuhn_back (not used anymore) was the Enemy implementation with starter content mesh and animation
    - BP_AI_Controller move the enemies depending on mode through the level
        split different behavior in seperate functions
    - BP_Enemy Spawner periodically creates new enemies
    - BP_Save Game struct to hold gamestate

- C++ integration
    Helper class for sorting as key-value pairs to show in highscores

- Music and Sound Effects
    - Different ambient sounds for menue and level
    - sound effects in level for shooting and reloading, as well as enemy hit and countdown
    - menue sounds for button clicks

- Saving and loading game data
    Because ingame save slots did not fit well into the game, the GameSate saving system was used
    to store and load highscores


- references
    - assets stores
        - http://shootertutorial.com/assets-stores-links/
    - animation creator from static meshes
        - https://www.mixamo.com/#/
        - retarget Mixamo animation to UE4 https://www.youtube.com/watch?v=UoGdTouVeRs&ab_channel=CARD00R
    - Godot Moorhuhn clone implementation
        - https://talesfromimdahl.de/2019/04/04/how-to-part-2/
    - Disintegration effect
        - https://www.youtube.com/watch?v=gldIJGqlWf0&ab_channel=UnrealCG
        - https://www.youtube.com/watch?v=D4bXMDFPcWQ&ab_channel=UnrealCG
        - http://martiancraft.com/blog/2015/02/disintegrating-baddies/


## Requirements

For this course earch student has to design and develop a small project in UE4. These projects do not necessarily have to be full-featured games, but have to demonstrate the student's ability to use certain aspects of the Unreal Engine in order to create fully functional games.

For his or her project a student can earn up to 106 points in total.
The following is a list of topics that have to be covered in the student project:

- Usage of UE4 framework, game modes/states, actors and pawns/characters (10 points)
    - User-controllable pawn or character
    - AI-controlled actors/pawns/characters 
- Design and creation of maps/levels (10 points)
    - BSP Brushes
    - Lightning
- Creation and usage of custom materials (10 points)
- Artificial Intelligence controllers for NPCs/enemies, Behavior Trees (10 points)
- Use of UMG UI Desiger (10 points)
    - Player HUD
    - Game Menu
- Character animations (10 points)
    - State Machine with manuel transitions
    - Blend Mode
- Some external content used from either marketplace, Internet, self-made (5 points)
- Correct and reasonable usage of Blueprint, for actors, levels, controllers, events (20 points)
    - Use of functions/macros/variables 
- Correct and reasonable usage of C++, for actors, components, events (10 points)

Additionally, some more points can be earned by adding these things to the project:

- Playing background music, using sound effects (5 points)
- Creating and using different particle systems (5 points)
- Saving and loading game data (5 points)
- Data-driven elements (2 points)
- Various post-processing components (2 points)


Based on the total available points the project is assessed using the official FHTW scheme:

```
             < 50%    Nicht genügend
>= 50%  und  < 63%    Genügend
>= 63%  und  < 75%    Befriedigend
>= 75%  und  < 88%    Gut
>= 88%                Sehr Gut
```

Note that copying content from the project we worked on in the lab or from Epic Games sample projects is not enough.
For a good mark you need to create your own content!

Also note that external plugins (incl. plugins from the UE4 marketplace) as well as VR games are not allowed!

A technical documentation that fully describes which of the aforementioned topics have been implemented and in which way, including a summary and overview on the whole project, is mandatory. This documentation has to describe where / in which assets in your project the requirements listed above can be found, and how you have implemented them. Without such a documentation your project won't be marked = fail!



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
