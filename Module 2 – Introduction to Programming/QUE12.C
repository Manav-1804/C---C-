#include<stdio.h>
#include<conio.h>


struct Student
{
	char name[50];
	int roll, marks;
};


void main()
{
	struct Student s[3];
	int i;


	clrscr();

	for(i = 0; i < 3; i++)
	{
		printf("\n Enter Details Of Student %d ", i+1);

		printf("\n Enter Name : ");
		scanf ("%s", &s[i].name);

		printf("Enter Roll Number : ");
		scanf("%d", &s[i].roll);

		printf("Enter Marks : ");
		scanf("%d", &s[i].marks);
	}

	printf("\n ------------- Student Details ----------------\n");

	for(i = 0; i < 3;i++)
	{
		printf("\n Student %d",i+1);
		printf("\n Name : %s", s[i].name);
		printf("\n Roll Number : %d",s[i].roll);
		printf("\n Marks : %d",s[i].marks);
	}

	getch();
}
