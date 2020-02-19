#include <stdio.h>

main()
{
	int x, y;
	x = 9;
	y = 2;
	 
	printf("Given value x = 9 and y = 2\n");
	printf("       x / y = %d\n", x / y);
	printf("(float)x / y = %f\n", (float)x / y); //there must be %f because of floating value
	return 0;
}
