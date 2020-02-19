#include <stdio.h>
//We will use an operation which is shorthand for an if statement
main(){
	int i;
	
	i = sizeof(int);
	printf("%s\n", (i == 2) ? "The int data type has 2 bytes" : "int  doesn't have  2 bytes");
	printf("The maximum value of int is : %d\n", (i != 2) ? ~(1 << i * 8 -1) : ~(1 << 15)); // We use tilde(~) for turn the value to postive
	return 0;
}
