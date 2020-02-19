#include <stdio.h>
main(){
	int i, j;
	for(i=1, j=0; i<8; i++, j++){
		printf(" %d - %d = %d\n", i, j, i-j);
	}
	return 0;
}
