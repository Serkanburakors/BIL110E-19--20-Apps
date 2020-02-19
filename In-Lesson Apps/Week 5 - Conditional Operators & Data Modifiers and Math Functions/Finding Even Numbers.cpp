#include <stdio.h>

main(){
	int x, y;
	for(x=1; x<50; x++){
	   if(x % 2 == 0){
	   	 y+= x;
	   }
	}
	printf("The sum of even numbers between 1 to 50 is : %d\n", y);
	return 0;
}
