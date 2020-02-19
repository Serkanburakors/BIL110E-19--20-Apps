/*Q3_3 - Write a program in C to Calculate the length of the string using a pointer.
Input a string : BIL110E*/
#include <stdio.h>
#include <string.h>
main(){
	char str[] = {'B','I','L','1','1','0','E','\0'};
	char *ptr_str;
	printf("Please enter 'BIL110E' as a string\n");
	scanf("%s", &str);
	ptr_str=str;
	printf("\n>>> Length of the string '%s' is = %d <<<\n",ptr_str, strlen(ptr_str));
	return 0;
}
/*Without <string.h>
#include <stdio.h>
void callength(char *sPtr);
int main()
{
    char string[50];
    printf("Enter a string \n");
    scanf ("%s", string);
    callength(string);
    return 0;
}
void callength(char *sPtr) <<<<-----IMPORTANT, THIS IS HOW strlen() works
{
    int i, length = 0;
    for (i = 0; sPtr[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of a string is the number of characters in it \n");
    printf("So, the length of %s = %d\n", sPtr, length);
}*/

