#include <stdio.h>
main(){
	int *ptr_int, i, a;
	int list_int[5]={1, 10, 5, 8, 9};
	ptr_int=list_int;
		for(i=0;i<=5;i++){
		a = list_int[i];
		printf("with list_c while using for loop  = %d\n", a);
	}
	printf("\n");
	for(i=1;i<=5;i++){
		printf("with *ptr_c while using ++ptr_int = %d\n", *ptr_int);
		++ptr_int;
	}
	return 0;
}
