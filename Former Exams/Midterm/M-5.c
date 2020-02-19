/*M-5 - Write a program in C to sort elements of the array {5, 9, 3, 2} in ascending
order.*/
#include <stdio.h>
main(){
	int arr[]={5, 9, 3, 2};
	int i, j, pass, hold;
	for(j=0;j<4;j++){
		printf("%d ", arr[j]);
	}
	for(pass=0;pass<=4;pass++){
		for(i=0;i<3;i++){
			if(arr[i]>arr[i+1]){
			hold=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=hold;
			}
		}
	}
	printf("\n");
	for(j=0;j<4;j++){
		printf("%d ", arr[j]);
	}
	return 0;
}
