/*Q4-2
a) What does Program 1 do in general?
b) Explain each variable, each repetition statement, each function called from
stdio library.

Answer:
Programýn özeti:
Program 10 öðrenciye ait isim, numara ve puan bilgisini kullanýcýdan girilmesini ister. Girilen bilgileri bir structure array'de saklar. 
Ardýndan bu bilgileri numara, isim ve not sütunlarý ile alt alta ekrana geri yazdýrýr.

Variables:
 - s: 10 uzunluklu student struct'ý array'i. Global deðiþkendir. Yapýnýn üç member'ý var:
	- 50 karakterli name adlý öðrenci ismi 
	- roll adlý tam sayý tipinde numara
	- marks adlý ondalýklý sayý tipinde not
 - i: tamsayý tipinde for döngüsü sayýcý deðiþkeni

Repetition statements: main içinde iki adet for döngüsü mevcuttur. Bunlar:
 - satýr 16: kullanýcýnýn terminalden bilgileri girmesi için s uzunluðu kadar (10) döndürülen blok baþlangýcý.
 - satýr 22: girilen öðrenci bilgilerinin ekrana geri yazdýrýlmasý için 10 defa döndürürlen blok baþlangýcý.
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

