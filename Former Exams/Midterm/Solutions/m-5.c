#include <stdio.h>
int main () {
int a[]= {5,9,3,2};
int pass,i,hold,j;
printf ("Orginal array is: \n");
for (j=0; j<4; j++){
  printf ("%d  ", a[j]);
}
for (pass=1; pass<=4; pass++){
  for (i=0; i<3; i++){
    if (a[i] > a[i+1]){
      hold = a[i];
      a[i+1]= a[i];
      a[i]= hold;
    }
  }
}
printf ("\nArray in ascending order is: \n");
for (j=0; j<4;j++){
  printf ("%d  ", a[j]);
}

return 0;
}
