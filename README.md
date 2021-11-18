# Project Acceleracer

Project Acceleracer is my largest project I have worked on, with over 20 contributors doing all sorts of work and over 5000 players.

## Summary:
- Fan Made
- Race Game
- No monetization
- Unreal Engine
- P2P NAT Punchtrough local host multiplayer
- Graphics optimizations

![Introduction image](https://www.ingmarmatthis.nl/images/mainBackground4.png)

This racing game uses simple racing mechanics alongside powerups and abilities, as well as complex levels that each test a different skill of the driver.

#### Controls and car mechanics:
Base driving is handled by W/S for throttle, A/D for steering and Spacebar for handbrake. Driving is complex however because each car handles differently. Different drivetrains, grip levels, RPM ranges, balance, acceleration, top speed, etc.

#### Abilities:
Abilities feature booster fuel which inscrease speed, as well as an ability depending on which "Team" the car is assigned:
 - "Teku" can use the booster fuel to fly upwards momentarily
 - "Metal Maniac" can activate a shield that negates dangers on the track
 - "Silencer" can activate magnets, holding the car on the road
 - "Drone" gets additional activations of the "Accelecharger" abilities
#### "Accelechargers":
Accelechargers are special powerups with unique effects. They only last for a short duration, and a player can only activate it once per race. Features include:
 - "Cybergrid Accelecharger" makes the car turn at a sharp, perfect 90 degree angle, keeping 100% of the car's momentum
 - "Solar Accelecharger" temporarily disables gravity for the car, allowing it to float across gaps
 - "Monument Accelecharger" makes the car into a 2d object, turning it paper thin so the driver can drive through small gaps
 
#### Tracks:
Each track is unique and made with spline tracks, decorative items, and unreal's terrain editor. Each track tests a different skill of the driver. Examples:
 - "Ice realm" track tests how the driver can control their car on low grip ice.
 - "Storm realm" track hits the car with devastating lightning if you don't drive on the racing line.
 - "Desert realm" track makes you navigate through a desert with only landmarks at your disposal.
 - "Cosmic realm" track disables gravity while keeping downforce enabled, forcing you to drive smoothly at a constant speed to keep your car on the track.

#### Progression:
Each track offers a new car unlock for completion, as well as either an "Accelecharger" powerup unlock, or a second car, for completing the track withing a certain time limit. The game itself keeps track of completion times, making the game suitable for speedrunning.

#### Multiplayer:
The game offers P2P NAT Punchtrough local host multiplayer, meaning that you can start "Peer to Peer" multiplayer sessions with your friends across the world, not requiring the user to port forward, or be on the same wifi network.

#### Graphics optimizations:
This game does require at least a dedicated graphics card to run, due to its nature as a high fidelity 3D game. However, thanks to mesh LODs, texture mipmapping, shader quality levels, resolution control, lighting optimizations and culling optimizations, the game can run well even on lower end devices.
