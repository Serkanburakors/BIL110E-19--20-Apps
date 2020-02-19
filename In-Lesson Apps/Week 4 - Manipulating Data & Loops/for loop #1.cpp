#include <stdio.h>
main(){
	int i =1;
	printf("Hex(uppercase)     Hex(lowercase)      Decimal\n");
	for(i=0;i<9;i++){
		printf("     %X          /        %x         /      %d\n", i, i, i);
	}
	return 0;
}
