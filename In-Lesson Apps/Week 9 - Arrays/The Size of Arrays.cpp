#include <stdio.h>
main(){
	int total_byte, i, a;
	int list_int[10];
	/*for(i=0;i<10;i++){
		list_int[i]=i+1;
	} Don't need to initialize to arrays for sizeof(array) operation'*/ 
	 total_byte=sizeof(list_int);
	 printf("The size of int is %d\nThe size of list_int[10] is %d\n", sizeof(a), total_byte);
	return 0;
}
