#include <stdio.h>

int evenCheck( int );

int main()
{ 
   int x, i;
      
   for ( i = 1; i <= 3; i++ )
   { 
      printf( "Enter an integer: " );
      scanf( "%d", &x );
   
      if ( evenCheck( x ) )
         printf( "%d is an even integer\n\n", x );
      else
         printf( "%d is not an even integer\n\n", x );
   }

   return 0;
}

int evenCheck( int a )
{ 
   return !( a % 2 );
}

