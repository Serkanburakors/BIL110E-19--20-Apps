#include <stdio.h>
main(){
	int passes, failures, student;
	float exam_res;
	passes = 0;
	failures = 0;
	student =1;
	while(student<=10){
		printf("Please input the next exam result: \n");
		scanf("%f", &exam_res);
		if(exam_res>70)
			passes++;
		else
			failures++;
		student++;//It must be in while
	}
	printf("Passes = %d\nFailures = %d\n", passes, failures);
	if(passes>=8)
		printf(">>>Raise Tuition<<<");
	return 0;	
}

