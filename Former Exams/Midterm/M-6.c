/*M-6 - Write a C program to read two integers from user, assign them to pointers
and pass that pointers to a function called addTwoPointers. The function
performs addition on these two pointers and assigns the result to the first
pointer. Then, the main function prints the result before it ends.*/
#include <stdio.h>
int addTwoPointers(int *x, int *y);
main(){
	int x, y, sum, *ptr_x, *ptr_y;
	printf("Please enter two integers\n");
	scanf("%d %d", &x, &y);
	ptr_x = &x;
	ptr_y = &y;
	printf("Sum is %d\n", addTwoPointers(&x,&y)); //inputs of function must be address value
	return 0;
}
int addTwoPointers(int *x,int *y){ // inputs are address values but outputs are pointers value
	return(*x+*y);
}
/*
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
}*/
