//Simple random decryption with C programming
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, x;
	char str[100];//char array with high limit
	srand(time(NULL));
	printf("\nPlease enter a uppercase string:\n");
	gets(str);//getting string from user
      for(i = 0; (i < 100 && str[i] != '\0'); i++)//conditioning with limiting with array size
        str[i] = str[i] - (rand() % 100); //the key for encryption israndom number that is subtracted to ASCII value
	printf("\nDecrypted string: %s\n", str);
	return 0;
}
   
