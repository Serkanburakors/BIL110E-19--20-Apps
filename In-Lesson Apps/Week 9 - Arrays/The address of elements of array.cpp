#include <stdio.h>
main(){
	int list_int[5], i;
	for(i=0;i<5;i++){
		list_int[i]=i+1;
		printf("The address of list_int[%d] is %p\n", i, &list_int[i]);
	}
	return 0;
}
