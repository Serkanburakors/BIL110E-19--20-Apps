#include <stdio.h>

main(){
	int x, y;
	double z;
	
	x = 28;
	y = 9;
	z = 21.8;
	
	printf("Given x = %d, y = %d, z = %5.1f\n", x ,y, z);
	printf("- x>y produces        : %d\n", x>y);
	printf("- x<y produces        : %d\n", x<y);
	printf("- x<=y produces       : %d\n", x<=y);
	printf("- x>=y produces       : %d\n", x>=y);
	printf("- x!=y produces       : %d\n", x!=y);
	printf("- x==y produces       : %d\n", x==y);
	printf("- x + y != z produces : %d\n", x + y != z);
	return 0;
}
