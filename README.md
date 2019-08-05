# Ultrasonic-Navigation-Basics-with-the-Parallax-ActivityBot
   Depending on the ActivityBot version used, the abdrive.h or the abdrive360.h library file must be properly chosen. Use the abdrive360.h library for the Parallax ActivityBot 32600 and the abdrive.h for the 32500 (the older model).   

  

Procedure      

  A random number is generated using the rand() function. By utilizing it in conjunction with the %2 modulus, its remainder can then be used to indicate a 1 or 0. With these variables, the ActivityBot can be passed conditions to make a left or right turn when approaching an obstacle. This was used in tandem with an if-else statement that would turn the robot one direction or the other depending on whether or not the remainder was one or zero. Once the robot made a turn 4 times, therefore detecting four obstacles, the program will stop running.      

  The next part of the lab deals with proportional control of the ActivityBot. Depending on how close or far away the ActivityBot is to the specified set point of an object, the ActivityBot’s speed will either increase or reverse. To achieve this, the difference between the distance and the set point is multiplied to calculate the appropriate wheel speeds. Also, maximum and minimum speed values were set to provide a speed range for the ActivityBot. These calculations were then printed to the terminal with a pause to allow enough time for the Parallax to process each iteration of the ping() function.  
