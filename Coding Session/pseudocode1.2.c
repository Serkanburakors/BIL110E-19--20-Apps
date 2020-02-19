#include <stdio.h>
main(){
	int passes = 0; //initialize passes to zero
	int failures = 0; //initialize failures to zero
	int student; //initialize student to one
	float exam_result;
	for(student=1;student<=10;student++){
		printf("Please input the next exam result: \n");
		scanf("%f", &exam_result);
		if(exam_result>70)
			passes++;
		else
			failures++;
	}
	printf("\nPasses:%d\nFailures:%d\n", passes, failures);
	if(passes=8&&passes>8)
		printf(">>>>Raise tuition<<<<");
	return 0;
}

