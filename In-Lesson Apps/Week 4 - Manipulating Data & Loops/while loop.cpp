//while
#include <stdio.h>
main(){
	int e;
	e = ' ';
	
	printf("--After using of program, enter x to exit\nEnter a character : \n");
	while(e != 'x'){
		e = getc(stdin); //assigns the inputed valur to the variable
		putchar(e); //prints vale of the variable
	}
	printf("\nOut of the while loop");
	return 0;
}
