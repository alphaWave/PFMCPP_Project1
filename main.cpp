#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       truck
//  action 1:   the truck accelerates
truck.accelerate();
//  action 2:   the truck transports lumber
truck.transportLumber();
//  action 3:   the truck drives over an obstacle
truck.driveOverObstacle();
 
//  2)
//  Noun:       robot
//  action 1:   the robot tilts its torso to the left
robot.tiltTorsoLeft();
//  action 2:   the robot shuts down (e.g. due to overheating)
robot.shutDown();
//  action 3:   the robot fires its integrated rocket launcher
robot.fireRocketLauncher();

 
//  3)
//  Noun:       ball
//  action 1:   the ball rolls downhill   
ball.rollDownhill();
//  action 2:   the ball bursts (e.g. due to being pumped with too much air)
ball.burst();
//  action 3:   the ball hits a wall  
ball.hitWall()
 
//  4)
//  Noun:       blanket
//  action 1:   the blanket covers a person
blanket.coverPerson();
//  action 2:   the blanket embellishes a room
blanket.embellishRoom();
//  action 3:   the blanket provides warmth
blanket.provideWarmth();
 
//  5)
//  Noun:       speaker
//  action 1:   the speaker moves its cone outward
speaker.moveConeOutward();
//  action 2:   the speaker shows its volume level (e.g. with an integrated LED)
speaker.showVolumeLevel();
//  action 3:   the speaker plays its calibration tone (e.g. for calibrating its frequency response to a particular room)
speaker.playCalibrationTone();
 
//  6)
//  Noun:       duck
//  action 1:   the duck quacks
duck.quack();
//  action 2:   the duck follows its mother duck
duck.followMotherDuck();
//  action 3:   the duck eats bread
duck.eatBread();
 
//  7)
//  Noun:       crane
//  action 1:   the crane pulls up a weight
crane.pullUpWeight();
//  action 2:   the crane lowers its hook
crane.lowerHook();
//  action 3:   the crane tips over
crane.tipOver();
 
//  8)
//  Noun:       hamster
//  action 1:   the hamster runs on its wheel
hamster.runOnWheel();
//  action 2:   the hamster squals
hamster.squeal();
//  action 3:   the hamster puts food into its cheek pouch
hamster.putFoodInCheekPouch();
 
//  9)          
//  Noun:       rocketFirstStage
//  action 1:   the rocket's first stage generates propulsion
rocketFirstStage.generatePropulsion();
//  action 2:   the rocket's first stage detonates its charges to separate from the rest of the rocket
rocketFirstStage.detonateCharges();
//  action 3:   the rocket's first stage accelerates the rocket
rocketFirstStage.accelerateRocket();
 
//  10)
//  Noun:       clock
//  action 1:   the clock sounds the alarm
clock.soundAlarm();
//  action 2:   the clock moves its hands to the 12:00 position (e.g. when a Reset-button is pressed)
clock.moveHandsTo12oClockPosition();
//  action 3:   the clock flashes its low battery light
clock.flashLowBatteryLight();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
