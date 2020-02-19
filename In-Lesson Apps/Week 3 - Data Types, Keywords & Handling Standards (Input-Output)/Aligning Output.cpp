// Alinging Output
#include <stdio.h>
main(){
	int num1, num2, num3, num4, num5;
	
	num1 = 1;
	num2 = 12;
	num3 = 123;
	num4 = 1234;
	num5 = 12345;
	printf("%6d %-5d\n", num1, num1);
	printf("%6d %-5d\n", num2, num2);
	printf("%6d %-5d\n", num3, num3);
	printf("%6d %-5d\n", num4, num4);
	printf("%6d %-5d\n", num5, num5);
	return 0;
}

