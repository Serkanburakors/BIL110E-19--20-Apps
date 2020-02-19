#include <stdio.h>

int main(void)
{
    int array[10];
    int i;
    array[0] = 0;

    for ( i=0; i<10; i++ ) {
        printf("Enter a number to be stored in  the array: ");
        scanf("%d", &array[i]);
    }

    printf("%s\n", "Array");

    for(i=0; i<10; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}

