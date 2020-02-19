//Simple encryption with C programming
#include <stdio.h>

int main(){
	int i, x;
	char str[100];//char array with high limit
	
	printf("\nPlease enter a uppercase string:\n");
	gets(str);//getting string from user
	for(i = 0; (i < 100 && str[i] != '\0'); i++)//conditioning with limiting with array size
		str[i] = str[i] + 2; //the key for encryption is 1 that is added to ASCII value
	printf("\nEncrypted string: %s\n", str);
	return 0;
}
   

