#include <stdio.h>
#include <math.h>

main(){
	double z;
	
	z = 45.0; /* 45 degree*/
	z *= 3.141593 / 180.0; /*convert to radians */
	printf("The sine of 45 is : %f.\n",sin(z));
	printf("The cosine of 45 is : %f.\n",cos(z));
	printf("The tangent of 45 is : %f.\n",tan(z));
	
	return 0;
}
