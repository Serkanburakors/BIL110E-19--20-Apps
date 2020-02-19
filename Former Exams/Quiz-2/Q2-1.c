/*Q2-1 - Write a function multiple that determines for a pair of integers whether the
second integer is a multiple of the first. The function should take two integer
arguments and return 1 (true) if the second is a multiple of the first, and 0
(false) otherwise. Use this function in a program that inputs a series of pairs
of integers.*/
#include <stdio.h>
multiple(int x, int y){
	if(x%y==0)
		return 1;
	else
		return 0;
}
main(){
	int x, y, z;
	printf("Please enter two value which you want to indicate second number is multiple of the first number\n");
	scanf("%d %d", &x, &y);
	z = multiple(x,y);
	if (z == 1)
		printf("Second integer is a multiple of the first.\n");
	else if (z == 0)
		printf("Second integer is not a multiple of the first.\n");
	return 0;
}
/*#include <stdio.h>

int multiple (int a, int b);

int main (void) {
    int s1 , s2;
    printf("Enter two integers.\n"); 
    scanf("%d%d", &s1, &s2);
    multiple(s1,s2);
    return 0;
}
int multiple (int a, int b) {
    if (b%a==0) {
        return 1;
    }
    else {
        return 0;
    }
}*/
