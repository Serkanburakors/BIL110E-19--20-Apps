#include <stdio.h>
#include <stdlib.h>
struct class_list{
	char *name;
	char *surname;
	int student_no;
	int mt;
	int hw_1;
	int hw_2;
	int q_1;
	int q_2;
	int final;
	int semester;
};
typedef struct class_list student;
main(){
	student lecture[5];
	student *ptr_s;
	int i;
	
	ptr_s ->name = "Cahit";
	ptr_s ->surname = "Zarifoglu";
	ptr_s ->student_no = 110012001;
	ptr_s ->mt = 88;
	ptr_s ->hw_1 = 100;
	ptr_s ->hw_2 = 90;
	ptr_s ->q_1 = 84;
	ptr_s ->q_1 = 88;
	ptr_s ->final = 93;
	ptr_s ->semester = ((ptr_s ->hw_1)*0.1) + ((ptr_s ->hw_2)*0.1) + ((ptr_s ->final)*0.4) + ((ptr_s ->q_1)*0.05) + ((ptr_s ->q_2)*0.05) + ((ptr_s ->mt)*0.3);
	
	ptr_s ->name = "Erdem";
	ptr_s ->surname = "Beyazid";
	ptr_s ->student_no = 110012002;
	ptr_s ->mt = 88;
	ptr_s ->hw_1 = 98;
	ptr_s ->hw_2 = 90;
	ptr_s ->q_1 = 78;
	ptr_s ->q_1 = 93;
	ptr_s ->final = 88;
	ptr_s ->semester = ((ptr_s ->hw_1)*0.1) + ((ptr_s ->hw_2)*0.1) + ((ptr_s ->final)*0.4) + ((ptr_s ->q_1)*0.05) + ((ptr_s ->q_2)*0.05) + ((ptr_s ->mt)*0.3);
	
	ptr_s ->name = "Nuri";
	ptr_s ->surname = "Ozdenoren";
	ptr_s ->student_no = 110012003;
	ptr_s ->mt = 88;
	ptr_s ->hw_1 = 88;
	ptr_s ->hw_2 = 92;
	ptr_s ->q_1 = 94;
	ptr_s ->q_1 = 86;
	ptr_s ->final = 99;
	ptr_s ->semester = ((ptr_s ->hw_1)*0.1) + ((ptr_s ->hw_2)*0.1) + ((ptr_s ->final)*0.4) + ((ptr_s ->q_1)*0.05) + ((ptr_s ->q_2)*0.05) + ((ptr_s ->mt)*0.3);
	
	ptr_s ->name = "Alaeddin";
	ptr_s ->surname = "Ozdenoren";
	ptr_s ->student_no = 110012004;
	ptr_s ->mt = 88;
	ptr_s ->hw_1 = 88;
	ptr_s ->hw_2 = 92;
	ptr_s ->q_1 = 94;
	ptr_s ->q_1 = 86;
	ptr_s ->final = 99;
	ptr_s ->semester = ((ptr_s ->hw_1)*0.1) + ((ptr_s ->hw_2)*0.1) + ((ptr_s ->final)*0.4) + ((ptr_s ->q_1)*0.05) + ((ptr_s ->q_2)*0.05) + ((ptr_s ->mt)*0.3);
	
	ptr_s ->name = "Mehmet Akif";
	ptr_s ->surname = "Inan";
	ptr_s ->student_no = 110012005;
	ptr_s ->mt = 88;
	ptr_s ->hw_1 = 78;
	ptr_s ->hw_2 = 92;
	ptr_s ->q_1 = 80;
	ptr_s ->q_1 = 94;
	ptr_s ->final = 98;
	ptr_s ->semester = ((ptr_s ->hw_1)*0.1) + ((ptr_s ->hw_2)*0.1) + ((ptr_s ->final)*0.4) + ((ptr_s ->q_1)*0.05) + ((ptr_s ->q_2)*0.05) + ((ptr_s ->mt)*0.3);
	for (i = 0; i < 5; i++) {
		printf("%d %s %s %d\n", ptr_s ->student_no, ptr_s->name, ptr_s ->surname, ptr_s -> semester);
		++ptr_s;
	}
	getchar();
	return 0;
}

/*
1- use the structure to read the information of the text file, determine the letter
grades of these students
2- calculate the final
numeric grade, then convert it to letter grade (use switch-case or if-else).
3- Print the resulting letter
grade in a new text file, using one line per student.*/

