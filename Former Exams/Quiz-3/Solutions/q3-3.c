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
void callength(char *sPtr)
{
    int i, length = 0;
    for (i = 0; sPtr[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of a string is the number of characters in it \n");
    printf("So, the length of %s = %d\n", sPtr, length);
}
