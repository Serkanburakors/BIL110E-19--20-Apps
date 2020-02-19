#include <stdio.h>

int addTwoPointers( int *n1, int *n2 );

int main(){

  int first, second;

  printf("Enter two integers to add: \n");
  scanf("%d%d", &first, &second);

  printf("The result is: %d\n", addTwoPointers( &first, &second ));

}

int addTwoPointers( int *n1, int *n2 ){

  
  *n1=*n1 + *n2;

  return *n1;
}
