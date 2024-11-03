#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
int id;
char name[50];
float gpa;
} Student;



Student *ptr;
void enter_details(int number_students);
void print_details(int number_students);

int main()
{
	Student student1;
	int number_students;
	//enter number of students
	printf("enter the number of students\n");
	scanf("%d", &number_students);
	
	ptr = (Student*) realloc(ptr, number_students * sizeof(Student));
	
	//enter student details
	enter_details(number_students);

	//print the ID, name, and GPA
	print_details(number_students);
}

void enter_details(int number_students)
{
	
	int i;
	for(i=0; i<number_students; i++)
	{
		printf("Enter ID for student %d:\n", i+1);
		scanf("%d", &ptr[i].id);


		printf("Enter name for student %d:\n", i+1);
		scanf("%s", &ptr[i].name);

		printf("Enter GPA for student %d:\n", i+1);
		scanf("%f", &ptr[i].gpa);
	}
}

void print_details(int number_students)
{
	int i;
	for(i=0; i<number_students; i++)
	{
		printf("Enter ID for student %d is %d\n", i+1, ptr[i].id);
						
		printf("Enter name for student %d is %s\n", i+1, ptr[i].name);
	
		printf("Enter GPA for student %d is %f\n", i+1, ptr[i].gpa);
	}
}
