#include <stdio.h>

main(){
	int num;
	
	num = 1;
	printf("Conditional Operator of 'AND' which is &&\n\n");
	printf("------------ %d && %d yields %d ------------\n", (num == 1), (num==1), (num==1)&&(num==1));
	printf("------------ %d && %d yields %d ------------\n", (num == 1), (num==0), (num==1)&&(num==0));
	printf("------------ %d && %d yields %d ------------\n", (num == 0), (num==1), (num==0)&&(num==1));
	printf("------------ %d && %d yields %d ------------\n\n", (num == 0), (num==0), (num==0)&&(num==0));
	
	printf("Let's indicate this case with different relations:\n");
	printf("For num = 1:\n------------ %d && %d yields %d ------------\n", (num%2 == 0), (num%3==0), (num%2==0)&&(num%3==0));
	num = 2;
	printf("For num = 2:\n------------ %d && %d yields %d ------------\n", (num%2 == 0), (num%3==0), (num%2==0)&&(num%3==0));
	num = 3;
	printf("For num = 3:\n------------ %d && %d yields %d ------------\n", (num%2 == 0), (num%3==0), (num%2==0)&&(num%3==0));
	num =4;
	printf("For num = 4:\n------------ %d && %d yields %d ------------\n", (num%2 == 0), (num%3==0), (num%2==0)&&(num%3==0));
	return 0;
}
