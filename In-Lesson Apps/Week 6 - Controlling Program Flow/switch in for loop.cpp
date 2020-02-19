#include <stdio.h>

main(){
	int day;

	for(day=0; day<=3; day++){
		switch(day){
			case '1':
				printf("Day %d\n", day);
			default:
				;
		}
	}
	
	
	return 0;
}
