/*M-3 - For repetition question: Write a program that calculates and prints the product of the odd integers
from 1 to 15 using for loop.*/
#include <stdio.h>
main (){
	int counter, multiply = 1;
	for(counter=1;counter<=15;counter++){
		if(counter%2 != 0)
			multiply *= counter;	
	}
	printf("Multiply is %d\n", multiply);
	return 0;
}
/*
#include <stdio.h>
int main () {
int a,multiply=1;
for (a=1; a<=15; a++){
if (a%2 != 0){
  multiply *= a;
}
}
printf ("Product is %d", multiply);
return 0;
}*/
