# 8613-GameChangers
FRC team 8613 Codebase

## Installing Code
#### 1. Download latest WPILib from releases [https://github.com/wpilibsuite/allwpilib/releases]
  - Downlad based on your operating system. https://docs.wpilib.org/en/stable/docs/getting-started/getting-started-frc-control-system/wpilib-setup.html

#### 2. run `git clone ${link} --recursive` when cloning (clones code with submodules)

#### 3. Build Code `./gradlew build` Successful if installed correctly
  - On windows use `gradlew build`. 
  - For linux and macOS you might need to run `sudo chmod +x gradlew` to be able to use the command

## Developing
  - Code for robot goes in `src/main/cpp & src/main/include`


## Documentation

#### @TODO (Put your docs/info on what your code does. e.g)

  - Drivebase
```
Uses XboxControllers on USB ports 0 and 1. Control Left and Right power via tankdrive with a maxspeed of 80% etc.... 
```
