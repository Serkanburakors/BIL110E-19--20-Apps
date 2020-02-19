/*Q3_1 - Write a program that inputs four strings that represent floating-point values,
converts the strings to double values, sums the values and prints the total of
the four values.*/
#include <stdio.h>
main(){
	float val_1, val_2, val_3, val_4;
	printf("Please enter four double type values\n");
	scanf("%f %f %f %f", &val_1, &val_2, &val_3, &val_4);
	printf("First value: %f\nSecond value: %f\nThird value: %f\nFourth value: %f\n", val_1, val_2, val_3, val_4);
	printf("The sum = %f", val_1+val_2+val_3+val_4);
	return 0;
}
/*#include <stdio.h>
int main () {
  float x,y,z,t;
  printf ("Enter four floating-points as strings, for example -12.345:\n");
  scanf("%f%*c%f%*c%f%*c%f",&x,&y,&z,&t); There is used "%*c" for different type of conversion
  printf ("Total of values are %f", x+y+z+t);
  return 0;
}*/
