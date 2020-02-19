/*This pragram computes the distance between two points*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 main(){
 	/*Declare and initialize variables*/
 	double x1=50, y1=30, x2=20, y2=10;
 	double side1, side2, dist;
 	/*Compute sides of the right triangle*/
 	side1=x2-x1;
 	side2=y2-y1;
 	dist=sqrt(side1*side1+side2*side2);
 	/*Print distance on the screen*/
 	printf("The distance between two ponts is %5.3f \n", dist);
 	
 	return 0;
 }

 


