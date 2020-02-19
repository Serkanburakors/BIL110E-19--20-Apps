#include <stdio.h>
int main(){
	int i=5, t=4;
	printf("i is equal to %d before operation\n", i);
	printf("t is equal to %d before operation\n", t);
	if(t<=i && t>0){
		t -= i;
		printf("i is equal to %d in if\n", i);	
		printf("t is equal to %d in if\n", t);
	}
	return 0;
}
