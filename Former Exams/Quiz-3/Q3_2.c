/*Q3_2 - Write a program that converts integer Fahrenheit temperatures from 0 to 212
degrees to foating-point Celsius temperatures with 3 digits of precision.
Perform the calculation using the formula
celsius = 5.0 / 9.0 * ( fahrenheit - 32 );*/
#include <stdio.h>
main(){
	int fahrenheit;
	float celcius;
	
	printf("Please enter temperature value in term of Fahrenheit\n");
	scanf("%d%*c", &fahrenheit);
	printf("Your Fahrenheit value is equal %.3f in term of Celcius\n", celcius=5.0/9.0*(fahrenheit-32));
	return 0;
}
/*#include <stdio.h>
int main () {
    int F;
    float C;
    printf ("Enter a temperature value in Fahrenheit unit: ");
    scanf("%d",&F);
    C= 5.0/9.0 * (F-32);
    printf ("\nF is equal to %.3f celcius", C);
    return 0;
}*/
