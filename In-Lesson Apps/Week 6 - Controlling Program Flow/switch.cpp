#include <stdio.h>

main(){
	int day;
	
	printf("Please enter a singlr digit for a day within the range 1 to 3\n");
	day=getchar();
	switch(day){
		case '1':
			printf("Day 1\n");
		case '2':
			printf("Day 2\n");
		case '3':
			printf("Day 3\n");
		default:
			;
	}
	return 0;
}
