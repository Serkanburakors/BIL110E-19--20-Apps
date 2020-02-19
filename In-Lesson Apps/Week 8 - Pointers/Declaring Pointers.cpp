#include <stdio.h>
main(){
	char c , *ptr_c;     //  Pointer
	int i, *ptr_i;       // <---------------
	float f, * ptr_f;    //  decleration
	c = 'C';
	i = 10;
	f = 123.356;
	printf("  c  : address=%p  content=%c\n", &c, c);
	printf("  i  : address=%p  content=%d\n", &i, i);
	printf("  f  : address=%p  content=%5.2f\n\n", &f, f);
	ptr_c = &c; //address assignment to the pointer
	printf("ptr_c: address=%p  content=%c\n", &ptr_c, *ptr_c); // reaching variable pointed bt pointer
	ptr_i = &i;
	printf("ptr_i: address=%p  content=%d\n", &ptr_i, *ptr_i);
	ptr_f = &f;
	printf("ptr_f: address=%p  content=%5.2f\n", &ptr_f, *ptr_f);
	printf("\n!!!!! contents of pointers without asteriks !!!!!\n");
	ptr_c = &c;
	printf("ptr_c: content=%c\n", ptr_c);
	ptr_i = &i;
	printf("ptr_i: content=%d\n",  ptr_i);
	ptr_f = &f;
	printf("ptr_f: content=%5.2f\n", ptr_f);
	
	return 0;
}

/*https://code.google.com/archive/search?q=label:C*/
