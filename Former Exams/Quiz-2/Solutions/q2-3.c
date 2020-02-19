#include "stdio.h"

void cubeByReference( int * );  
int main(void) {
int a[3];
int i;
int *iPtr;
iPtr = &i; 

for( i= 0; i<3; i++){
  printf("enter 3 integers\n");
  scanf("%d",&a[i]);
}
int number = a[1];

   printf( "The original value of number is %d", a[1] );
   cubeByReference( &a[1] );
   printf( "\nThe new value of number is %d\n", a[1] );
   printf( "Adress of the second integer is %p:" , &a[1] );
   return 0;
}


void cubeByReference( int *nPtr )
{
   *nPtr = *nPtr * 2;  
}
