#include <stdio.h>
#include <math.h>

main(){
	double x, y, z;
	
	x = 64.0;
	y = 3.0;
	z = 0.5;
	
	printf("pow(64.0, 3.0) returns : %7.0f\n", pow(x, y));
	printf("sqrt(64.0) returns     : %7.0f\n", sqrt(64.0));
	printf("pow(64.0, 0.5) returns : %7.0f\n", pow(64.0, 0.5));
			
	return 0;
	
}

