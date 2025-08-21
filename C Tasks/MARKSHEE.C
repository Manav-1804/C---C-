#include<stdio.h>
#include<conio.h>

struct Student
{
	int roll,s1,s2,s3,total;
	char name[50];
	double per;
};

void main()
{
	struct Student s[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
	printf("\n Enter The Student Name : ");
	gets(s[i].name);
	printf("\n Enter Roll Number : ");
	scanf("%d", &s[i].roll);
	printf("\n Enter Subject 1 Marks : ");
	scanf("%d", &s[i].s1);
	printf("\n Enter Subject 2 Marks : ");
	scanf("%d", &s[i].s2);
	printf("\n Enter Subject 3 Marks : ");
	scanf("%d", &s[i].s3);
	s[i].total=s[i].s1+s[i].s2+s[i].s3;
	s[i].per = s[i].total/3;
	getch();
	}
	for(i=0;i<3;i++)
	{
	printf("\n Student : %s ",s[i].name);
	printf("\n Roll Number : %d",s[i].roll);
	printf("\n Total : %d",s[i].total);
	printf("\n Percentage : %lf",s[i].per);
	}

	getch();
}