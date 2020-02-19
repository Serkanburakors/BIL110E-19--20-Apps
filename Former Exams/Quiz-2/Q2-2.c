/*Q2-2 - Write a program to store 10 integers entered by the user in an array. Then
print them.*/
#include <stdio.h>
main (){
	int int_ar[10];
	int i, j;
	for(i=0;i<10;i++){
		printf("Please enter an integer\n");
		scanf("%d", &j);
		int_ar[i]=j;		
	}
	for(i=0;i<10;i++){
		printf("%d ", int_ar[i]);
	}
	return 0;
}
/*
#include <stdio.h>
int main(void){
    int array[10];
    int i;
    array[0] = 0;
    for ( i=0; i<10; i++ ) {
        printf("Enter a number to be stored in  the array: ");
        scanf("%d", &array[i]);
    }
    printf("%s\n", "Array");
    for(i=0; i<10; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}*/
