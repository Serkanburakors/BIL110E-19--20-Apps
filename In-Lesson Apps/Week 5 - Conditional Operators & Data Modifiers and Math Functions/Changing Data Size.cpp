#include <stdio.h>

main(){
	printf("The size of  int is %d-bytes\n", sizeof(int));
	printf("The size of short int is %d-bytes\n", sizeof(short int));
	printf("The size of long int is %d-bytes\n", sizeof(long int));
	printf("The size of unsigned int is %d-bytes\n", sizeof(unsigned int));
	printf("The size of signed int is %d-bytes\n\n", sizeof(signed int));
	printf("The size of double is %d-bytes\n", sizeof(double));
	printf("The size of short double does not exist\n");
	printf("The size of long double is %d-bytes\n", sizeof(long double));
	printf("The size of unsigned double does not exist\n");
	printf("The size of signed double does not exist\n\n");
	printf("The size of float is %d-bytes\n", sizeof(float));
	printf("The size of short float does not exist\n");
	printf("The size of long float  does not exist\n");
	printf("The size of unsigned float does not exist\n");
	printf("The size of signed float does not exist\n");
	
	return 0;
}
