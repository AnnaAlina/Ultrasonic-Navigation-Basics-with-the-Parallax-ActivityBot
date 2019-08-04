#include "simpletools.h"                      // Include simpletools header
#include "abdrive360.h"                          // Include abdrive header
#include "ping.h"                             // Include ping header

int distance, setPoint, errorValue, kp, gogo;  //declaring integer variables                                   // Navigation variable

int main()                                    // main function
{
  setPoint = 20;    //target range in cm 
  kp = 10;          //proportional control

  while(ping_cm(8) >= 20){
     pause(5);           // Wait until object in range
    turn = (turn + 1)%2;
  // Turn in a random direction
    if(turn == 1){                               // If turn is odd
      drive_speed(64, -64);                     // rotate right
    }  
   else{                                        // else (if turn is even)
    drive_speed(-64, 64);                       // rotate left
  }                         
  }    
  // Keep turning while object is in view
  while(ping_cm(8) < 20);                     // Turn till object leaves view

}}
