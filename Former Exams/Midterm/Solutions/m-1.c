#include <stdio.h>
int main () {
int number,x;
printf ("Enter a number: ");
scanf ("%d", &number);
if (number<0){
  x= -1;
}
else if (number==0){
  x=0;
}
else {
  x=1;
}
switch (x){
case -1:
printf ("Number is negative");
break;

case 0:
printf ("Number is zero");
break;

case 1:
printf ("Number is positive");
break;
}

  return 0;
}

