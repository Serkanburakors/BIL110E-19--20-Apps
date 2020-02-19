/*Q1-2 - Write a program that utilizes looping to print the numbers from 1 to 10 side by
side on the same line with three spaces between numbers. Use FOR repetition
statement.*/
#include <stdio.h>
main(){
	int x;
	for(x=0; x<=10; x++)
		printf("%4d", x);
	return 0;
}
/*
#include <stdio.h>
int main(){
    int k;
    for( k = 1; k <= 10; k++ ) {
        printf("%d   ", k );
    }
  return 0;
}*/
