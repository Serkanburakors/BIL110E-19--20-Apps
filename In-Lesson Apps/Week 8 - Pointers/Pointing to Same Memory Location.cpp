#include <stdio.h>
main(){
	int x, *ptr_1 , *ptr_2, *ptr_3;
	
	x = 1234;
	printf("   x  : address= %p   content= %d\n", &x, x);
	ptr_1 = &x;
	printf(" x => ptr_1\n ptr_1 : address= %p   content= %d\n", &ptr_1, *ptr_1);
	ptr_2 = &x;
	printf(" x => ptr_2\n ptr_2 : address= %p   content= %d\n", &ptr_2, *ptr_2);
    ptr_1 = ptr_3;
	printf(" ptr_1 => ptr_3\n ptr_3 : address= %p   content= %d\n", &ptr_3, *ptr_3);
	return 0;
}
