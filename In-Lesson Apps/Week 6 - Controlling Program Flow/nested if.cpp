#include <stdio.h>

main(){
	int i;
	
	for(i=-5;i<=5;i++){
		if(i>0)
			if(i%2==0)
			printf(" %d is a even number\n", i);
			else
			printf(" %d is a odd number\n", i);
		else if(i==0)
			printf(" ---------------------------\n %d is zero which is origin\n ---------------------------\n", i);
		else
			printf(" %d is a negative number\n", i);
	}
	return 0;
}
