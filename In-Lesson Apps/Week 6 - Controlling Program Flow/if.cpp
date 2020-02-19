#include <stdio.h>

main(){
	int i;
	printf(" Integers that can be divided by both 2 and 3 within the range of 0 to 100\n\n");
	for(i=0;i<=100; i++){
		if((i%2==0)&&(i%3==0)){
			printf(">%3d\n", i);
		}
	}
	return 0;
}
