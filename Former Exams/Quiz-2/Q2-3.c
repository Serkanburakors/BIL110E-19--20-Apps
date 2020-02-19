/*Q2-3 - Write a program to store 3 integers entered by the user in an array. Write a
function which accepts a pointer to integer, and multiplies the value
pointed by 2. Call the function by passing the address of the 2nd integer in
the array.*/
#include <stdio.h>
void cubeByReference( int *nPtr ){
   *nPtr = *nPtr * 2;  
}
main (){
	int int_arr[3];
	int i, j, *ptr_arr1, *ptr_arr2, *ptr_arr3;
	printf("Please enter 3 integers:\n");
	for(i=0;i<3;i++)
		scanf("%d", &int_arr[i]);
	for(i=0;i<3;i++)
		printf("int_arr[%d] is %d\n", i, int_arr[i]);
	ptr_arr1=&int_arr[0];
	ptr_arr2=&int_arr[1];
	ptr_arr3=&int_arr[2];
	cubeByReference(&int_arr[1]);
	printf( "The new value of int_arr[1] is %d\n", int_arr[1] );
	printf( "Adress of the second integer is %p:\n" , &int_arr[1] );
	return 0;	
}
