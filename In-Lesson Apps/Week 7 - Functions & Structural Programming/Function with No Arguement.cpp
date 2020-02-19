#include <stdio.h>
#include <time.h>

void GetDateTime(void); //function decleration
main(){
	printf("Before the function called\n");
	GetDateTime(); //function call
	printf("After the function called\n");
	return 0;
}
void GetDateTime(void){ //function definition
	time_t now; 
	printf("Within GetDateTime()\n");
	time(&now);
	printf("Curent date and time is: %s\n", asctime(localtime(&now)));
}
