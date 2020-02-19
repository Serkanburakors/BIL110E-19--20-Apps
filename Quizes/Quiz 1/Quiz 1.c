#include <stdio.h>

main(){
	int i = 1, j;
	while(i<=10){ //contiuning condition
		printf("i is %d\n", i); //outputing i
		j = i++;
		while(j<=10){ //continuing condition
			printf("j is %d\n", j); //outputing j
			j = j++;
			break; //break the infinite loop
		}
		printf("\n"); // providing a empty row
	}
	return 0;
}
