#include<stdio.h>

unsigned calculateSecond(int, int, int);

int main(){
   int h = 0, m = 0, s = 0, seconds = 0;
   int value1;
   int value2;
   int value3;
   
   printf("\nEnter time in hour, minute, and second...\nHour: ");
   scanf("%d", &h);
   printf("Minutes: ");
   scanf("%d", &m);
   printf("Seconds: ");
   scanf("%d", &s);

   value1 = calculateSecond(h, m, s);
   
   printf("The number of seconds since the last time the clock struck 12 is %u\n", value1);

   printf("\nEnter time in hour, minute, and second...\nHour: ");
   scanf("%d", &h);
   printf("Minutes: ");
   scanf("%d", &m);
   printf("Seconds: ");
   scanf("%d", &s);

   value2 = calculateSecond(h, m, s);
   
   printf("The number of seconds since the last time the clock struck 12 is %u\n", value2);

   value3 = value2 - value1;
   
   printf("\nThe amount of time in seconds between two times is: %d \n", value3);
   return 0;
}

unsigned calculateSecond(int hours, int minutes, int seconds){   
   return (hours * 3600) + (minutes * 60) + seconds;         
}
