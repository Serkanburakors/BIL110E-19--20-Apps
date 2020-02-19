/*Q4-2
a) What does Program 1 do in general?
b) Explain each variable, each repetition statement, each function called from
stdio library.

Answer:
Program�n �zeti:
Program 10 ��renciye ait isim, numara ve puan bilgisini kullan�c�dan girilmesini ister. Girilen bilgileri bir structure array'de saklar. 
Ard�ndan bu bilgileri numara, isim ve not s�tunlar� ile alt alta ekrana geri yazd�r�r.

Variables:
 - s: 10 uzunluklu student struct'� array'i. Global de�i�kendir. Yap�n�n �� member'� var:
	- 50 karakterli name adl� ��renci ismi 
	- roll adl� tam say� tipinde numara
	- marks adl� ondal�kl� say� tipinde not
 - i: tamsay� tipinde for d�ng�s� say�c� de�i�keni

Repetition statements: main i�inde iki adet for d�ng�s� mevcuttur. Bunlar:
 - sat�r 16: kullan�c�n�n terminalden bilgileri girmesi i�in s uzunlu�u kadar (10) d�nd�r�len blok ba�lang�c�.
 - sat�r 22: girilen ��renci bilgilerinin ekrana geri yazd�r�lmas� i�in 10 defa d�nd�r�rlen blok ba�lang�c�.
*/
#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float marks;	
}
s[10];
int main(){
	int i;
	printf("Enter information of students:\n");
	// storing information
	for(i=0; i<10; ++i){
		s[i].roll = i+1;
		printf("\nFor roll number%d,\n", s[i].roll);
		
		printf("Enter name: ");
		scanf("%s", &s[i].name);
		
		printf("Enter marks: ");
		scanf("%f", &s[i].marks);
		
		printf("\n");
		
	}
	
	printf("Displaying Information:\n\n");
	//displaying information
	for(i=0; i<10; ++i){
		printf("\nRoll number: %d\n", i+1);
		printf("Name: ");
		puts(s[i].name);
		printf("Marks: %.1f", s[i].marks);
		printf("\n");
	}
	return 0;
}

