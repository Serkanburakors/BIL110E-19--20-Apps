#include <stdio.h>
int main () {
    int F;
    float C;
    printf ("Enter a temperature value in Fahrenheit unit: ");
    scanf("%d",&F);
    C= 5.0/9.0 * (F-32);
    printf ("\nF is equal to %.3f celcius", C);
    return 0;
}
