#include <stdio.h>
int main () {
int a,multiply=1;
for (a=1; a<=15; a++){
if (a%2 != 0){
  multiply *= a;
}
}
printf ("Product is %d", multiply);
return 0;
}
