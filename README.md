# Ultrasonic-Navigation-Basics-with-the-Parallax-ActivityBot
     

  The objective of this lab is to understand the navigation basics for the Parallax ActivityBot to avoid obstacles using an ultrasonic sensor.  This lab will be a comprehensive example on transit time measurements based on the amount of time it takes for the Propeller microcontroller to receive the echoed signal.  Students will also be required to understand proportional feedback; the ultrasonic sensor will serve as the sensor for the feedback loop. This lab will also provide an exercise working with character commands and displaying information on the SimpleIDE terminal terminal.   

Introduction     

  The first section of Lab 5 will require students to use a random number generator that then obtains a remainder to determine which direction a robot will turn when navigating with the ultrasonic sensor.  Which direction the robot will turn with the random generation will be up to the participants. Another parameter will be added for the robot to stop operating once four objects have been detected with the ultrasonic sensor.  This will cover the first three sections of the lab.      

  After the first three exercises, the students must use the SimpleIDE terminal to display various equations and their resultants.  These values include the distance found by the ultrasonic sensor, the error value calculated from the distance compared to the set point, the speed calculated from the proportional constant and error value, then the resulting speed after checking the speed limit (this should be 128 ticks per second maximum).     

  Once this is all done, students will then use the values to keep the robot 20cm from the sensor’s location on the bot. This will be done using proportional feedback. Participants will adjust the proportionality constant and speed limits to make the robot’s process smoother, without any type of extraneous movement.  

Procedure      

  For the first section of the lab, a random number is generated using the rand() function. By utilizing it in conjunction with the %2 modulus, its remainder can then be used to indicate a 1 or 0. With these variables, the ActivityBot can be passed conditions to make a left or right turn when approaching an obstacle. This was used in tandem with an if-else statement that would turn the robot one direction or the other depending on whether or not the remainder was one or zero. Once the robot made a turn 4 times, therefore detecting four obstacles, the program will stop running.      

  The next part of the lab deals with proportional control of the ActivityBot. Depending on how close or far away the ActivityBot is to the specified set point of an object, the ActivityBot’s speed will either increase or reverse. To achieve this, the difference between the distance and the set point is multiplied to calculate the appropriate wheel speeds. Also, maximum and minimum speed values were set to provide a speed range for the ActivityBot. These calculations were then printed to the terminal with a pause to allow enough time for the Parallax to process each iteration of the ping() function.  