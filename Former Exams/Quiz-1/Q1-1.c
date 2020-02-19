/*Q1.1 - Write a program that asks an integer from the user and prints your name if
the integer is 0 and your surname if it is 1. Use if... else selection statement.*/
#include <stdio.h>
main (){
	int x;
	printf("Please enter 0 or 1\n");
	x=getchar();
	if(x=='0')
		printf("Serkan Burak\n");
	else if (x == '1')
		printf("Ors\n");
	return 0;
}
/*#include <stdio.h>
int main(void){
    int num;
    printf("Enter an integer.\n");
    scanf("%d",&num);
    if ( num == 0){
        printf("name");
    }
    else if (num == 1){
        printf("surname");
    }
    return 0;
}*/
