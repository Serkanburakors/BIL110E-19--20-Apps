#include <stdio.h>
main(){
	int *ptr_c;     //  Pointer decleration
	int list_c[5], i; // Array decleration
	printf(" list_c : address=%p\n", &list_c);
	printf(" ptr_c  : address=%p\n\n", &ptr_c);
	for(i=0;i<5;i++){
		list_c[i] = i+1;
		ptr_c = &list_c[i]; //address assignment to the pointer
		printf("  %d\n list_c : address=%p\n",i, &list_c);
		printf(" ptr_c  : address=%p\n\n", &ptr_c);
	}
	
	return 0;
}
