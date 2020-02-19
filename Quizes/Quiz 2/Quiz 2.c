#include <stdio.h>
int my_strlen(char *ptr_str1){ //Array arithmetic via index operator
	int i = 0;
	while(ptr_str1[i] !='\0'){
		i++;
	}
	return i;
}
/*int my_str_len2(char *ptr_strx){ //pointer arithmetic via index operator
	int i = 0;
	while(*ptr_strx = '\0'){
		i++;
	}
	return i;
}*/   // I couldn't do, this is igivng error
main(){
	char *ptr_str1;
	ptr_str1="string lenght";
	
	printf("Numbrs of string = %d\n", my_strlen(ptr_str1));
	//printf("Numbrs of string = %d\n", my_strlen2(ptr_str1));
	getchar();
	return 0;
}
