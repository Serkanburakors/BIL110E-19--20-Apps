#include <stdio.h>
main(){
	char t;
	char x;
	int y;
	int w;
	float z;
	float u;
	printf("chars\nt: address=%p  content=%c\n", &t, t);
	printf("x: address=%p  content=%c\nints\n", &x, x);
	printf("y: address=%p  content=%d\n", &y ,y);
	printf("w: address=%p  content=%d\nfloats\n", &w, w);
	printf("z: address=%p  content=%5.2f\n", &z, z);
	printf("u: address=%p  content=%5.2f\n", &u, u);
	t = 'T';
	x = 'X';
	y = 12;
	w = 20;
	z = 123.456;
	u = 654.321;
	printf("\nAfter assigning\n\n");
	printf("t: address=%p  content=%c\n", &t, t);
	printf("x: address=%p  content=%c\n\n", &x, x);
	printf("y: address=%p  content=%d\n", &y ,y);
	printf("w: address=%p  content=%d\n\n", &w, w);
	printf("z: address=%p  content=%5.2f\n", &z, z);
	printf("u  address=%p  content=%5.2f\n", &u, u);
	return 0;
}
