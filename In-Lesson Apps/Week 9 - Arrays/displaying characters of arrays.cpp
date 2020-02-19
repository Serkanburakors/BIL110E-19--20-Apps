#include <stdio.h>
main(){
	char array_ch[7] = {'h','e','l','l','o','!','\0'};
	int i;
	for(i=0;i<7;i++){
		printf("array_ch[%d] is : %c\n", i, array_ch[i]);
	}	
	//Method 1
	printf("\nPut all elements together with Method 1\n");
	for(i=0;i<7;i++){
			printf("%c\n", array_ch[i]);
	}
	//Method 2
	printf("Put all elements together with Method 2\n");
	printf("%s\n", array_ch);
	return 0;
}
