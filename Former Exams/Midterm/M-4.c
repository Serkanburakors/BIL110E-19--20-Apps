/*M-4 - Function (call by value) question: Write a program that inputs a series of integers and passes them one at a time
to function called evenCheck, which uses the remainder operator to
determine if an integer is even. The function should take an integer argument
and return 1 if the integer is even and 0 otherwise. Integers are read from the
user and the result will be printed to the terminal.*/
#include <stdio.h>
int evenCheck(int);

main (){
	int x, i;
	printf("Please enter the value you want to check it is even or not\n");
	scanf("%d", &x);
	i=evenCheck(x);
	if(i==0){
		printf("Entered value is not even", i);
	}
	else if(i==1){
		printf("Entered value is even", i);
	}
	return 0;
}
int evenCheck(int x){
	return !(x % 2);
}
/*
--> Difference of this program is only it wants integer three times form users.
#include <stdio.h>   

int evenCheck( int );

int main(){ 
   int x, i;
   for ( i = 1; i <= 3; i++ ){ 
      printf( "Enter an integer: " );
      scanf( "%d", &x );
   
      if ( evenCheck( x ) )
         printf( "%d is an even integer\n\n", x );
      else
         printf( "%d is not an even integer\n\n", x );
   }
   return 0;
}
int evenCheck( int a ){ 
   return !( a % 2 );
}*/


