#include "robot.h"

int search() 
{
 int start =  SEARCH_CENTER-SEARCH_RANGE/2;
 int best_pos=start;
 int best_val=0;
  for (int i =start;i<(start+SEARCH_RANGE);i+=SEARCH_STEP)
  {
    int avg=0;
    irServo.write(i);
    delay(15);
    for(int j=0;j<SEARCH_N_MEASUREMENTS;j++)
    {
      avg+=analogRead(analogInPin);
      delay(10);
      
    }
    avg/=SEARCH_N_MEASUREMENTS;
    if(avg>best_val)
    {
      best_val = avg;
      best_pos=i;
    }

  }
  irServo.write(best_pos);
  delay(10000);
  return best_pos;
}