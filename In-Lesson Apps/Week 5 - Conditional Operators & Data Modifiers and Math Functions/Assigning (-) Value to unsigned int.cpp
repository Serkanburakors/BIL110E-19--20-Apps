//assigning negative value to unsigned data type
#include <stdio.h>

main(){
	unsigned int i = -5U;
	printf("unsigned int i is : %u\nunsigned variables do not take negative value but here there is an error", i);
	return 0;
}
