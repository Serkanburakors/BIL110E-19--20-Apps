#include <stdio.h>
float iteration(float x_init,float a, float h){
	float k, x;
	for(k=1;k<=100;k++){
		x+=x_init-a*x_init*h;
		printf("x at every step = %5.2f\n", x);
	}
}
main(){
	float x_init, a, h, k, x;
	printf("Please input x_init\n");
	scanf("%f", &x_init);
	printf("Please input a\n");
	scanf("%f", &a);
	printf("Please input h\n");
	scanf("%f", &h);
	iteration(x_init,a,h);
	return 0;
}
