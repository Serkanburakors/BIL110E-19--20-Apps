#include <stdio.h>

int func_1(int x, int y); //function_1 decleration: we have made our declaration before main function so we can write definition somewhre else
double func_2(double x, double y){ //function_2 definiiton
	return(x-y);
}
main(){
	int x1 = 80;
	int y1 = 10;
	double x2 = 100.123456;
	double y2 = 10.123456;
	
	printf("Before enter the first function which is x1+y1, x1 = %d, x2 = %d\n", x1, y1);
	printf("After enter the first function which is x1+y1 = %d\n", func_1(x1, y1));
	printf("Before enter the second function which is x2*y2, x2 = %f, x2 = %f\n", x2, y2);
	printf("After enter the second function which is x2*y2 = %f\n", func_2(x2, y2));
	return 0;	
}
int func_1(int x, int y){ //function_1 definition
	return(x+y);
}
