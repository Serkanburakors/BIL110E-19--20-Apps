#include <stdio.h>

main(){
	char chh = 't';
	int int_num = 8;
	double duble = 7.4;
	float flt_num = 8.9f;
	
	printf("----------- Measuring Data Types -----------\n\n");
	printf("The size of data type char is %d-byte\n", sizeof(char));
	printf("The size of char variable chh is %d-byte\n", sizeof chh);
	printf("The size of data type int is %d-byte\n", sizeof(int));
    printf("The size of int variable int_num is %d-byte\n", sizeof int_num);
	printf("The size of data type double is %d-byte\n", sizeof(double));
	printf("The size of double variable duble is %d-byte\n", sizeof duble);
	printf("The size of data type float is %d-byte\n", sizeof (float));
	printf("The size of float variable flt_num is %d-byte\n", sizeof flt_num);
	
	return 0;
}
