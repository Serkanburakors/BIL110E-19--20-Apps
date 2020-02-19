#include <stdio.h>
main(){
	float sum = 0, value;
	printf("Please enter a number\n");
	scanf("%f", &value);
	while(value!=-1){
		sum+=value;
		printf("Please enter a integer and for sum please enter -1\n");
		scanf("%f", &value);
	}
	printf("The sum is %2.3f\n", sum);
	return 0;
}
