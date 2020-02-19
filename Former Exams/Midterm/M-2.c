/*M-2 - While repetition question: Write a program that uses while looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the
columns with tabs..*/
#include <stdio.h>
main (){
	int N = 1;
	printf("N\tN*10\tN*100\tN*1000\n");
	while(N<=10){
		printf("%d\t%d\t%d\t%d\n", N, N*10, N*100, N*1000);
		N++;
	}
	return 0;
}
/*
#include <stdio.h>
int main () {
int N=1;
printf ("N\t10*N\t100*N\t1000*N\n\n");
while (N<=10){
  printf ("%d\t%d\t%d\t%d\n",N,10*N,100*N,1000*N);
  N++;
}
return 0;
}*/
