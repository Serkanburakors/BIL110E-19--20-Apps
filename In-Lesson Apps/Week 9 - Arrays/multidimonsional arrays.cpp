#include <stdio.h>
main(){
	int deux_dim[2][3] /*[row][column]*/ = {{1,2,3},{4,5,6}}; /*{{first row}}{{second column}}*/
	int i, j;
	for(i=0;i<2;i++){ //first row
		printf("\n");
		for(j=0;j<3;j++){ //second column
			printf("%4d", deux_dim[i][j]);
		}
	}
	printf("\n");
	return 0;
}
