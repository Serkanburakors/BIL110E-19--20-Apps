#include <stdio.h>
main(){
	int i;
	printf("Enter a character:\n(enter x to exit)\n");
	while	{
		i = getc(stdin);
		if(i == 'x')
			break;
	}
	printf("Break the infinite while loop. Bye!\n");
	return 0;
}
