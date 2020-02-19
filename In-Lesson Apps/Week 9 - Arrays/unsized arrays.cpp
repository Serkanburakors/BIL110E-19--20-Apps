#include <stdio.h>
main(){
	char array_ch[] = {'C', ' ', 'i', 's', ' ','p', 'o', 'w', 'e', 'r', 'f', 'u', 'l', '!', '\0'};
	int list_int[/*It is arranged by entered variables*/][3] = {1,1,2,3,5,8,13,25,38,63,101,164};
	printf("The size of array_ch[] is %d-bytes\n", sizeof(array_ch));
	printf("The size of list_ch[][3] is %d-bytes\n", sizeof(list_int));
	return 0;
}
