#include <stdio.h>
#include <math.h>
float distance(float x1, float x2, float y1, float y2){
	float res, x_diff, y_diff;
	x_diff = x2 - x1;
	y_diff = y2 - y1;
	res=sqrt(x_diff*x_diff + y_diff*y_diff);
	return res;
}
main(){
	float x1, x2, y1, y2, dist;
	printf("Please enter x1\n");
	scanf("%f", &x1);
	printf("Please enter x2\n");
	scanf("%f", &x2);
	printf("Please enter y1\n");
	scanf("%f", &y1);
	printf("Please enter y2\n");
	scanf("%f", &y2);
	
	printf(" x1 = %f  x2 = %f\n y1 = %f  y2 = %f\n", x1, x2, y1, y2);
	
	dist = distance(x1,x2,y1,y2);
	printf("Distance is = %f", dist);
	return 0;
}
