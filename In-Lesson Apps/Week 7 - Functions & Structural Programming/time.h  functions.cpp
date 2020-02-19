#include <stdio.h>
#include <time.h>
main(){
	time_t now; //time_t is the arithmetic type that used to represent time.
	time(&now); /*time() function returns -1 if the calendar time is not available on the computer.
	              so we use an arguement for getting different valur from -1*/
	printf("Curent date and time is: %s\n", asctime(localtime(&now))); /* asctime() is to convert the date and time represented by
	the structure tm.                               localtime() returns the local time convrtedd from the calender time.*/
	return 0;
}
	
	
