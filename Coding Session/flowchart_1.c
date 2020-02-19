#include <stdio.h>
main(){
	int sum, counter, limit, input_val;
	sum = 0, input_val = 0, counter = 1, limit = 5;
	do{
		printf("Please enter a integer\n");
		scanf("%d", &input_val);
		sum+=input_val;
		counter++;
	}while(counter<=limit);
	printf("Sum = %d", sum);
	return 0;
	
}
