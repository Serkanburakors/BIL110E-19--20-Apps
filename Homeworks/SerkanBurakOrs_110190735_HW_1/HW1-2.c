#include <stdio.h>
main(){
	int fterm, sterm, temp;
	fterm = 0;
	for(sterm = 1;sterm<=1000;sterm++){
		printf("sterm = %d\n", sterm);
		temp = sterm;
		sterm+=fterm;
	}
	return 0;
}

