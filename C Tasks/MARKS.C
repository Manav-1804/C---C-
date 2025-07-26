


#include<stdio.h>
#include<conio.h>

void main()
{

	int rno,s1,s2,s3,total;
	double per;
	char sname[40];
	clrscr();
	printf("\nEnter Student Name : ");
	gets(sname);
	printf("\nEnter Roll Number :");
	scanf("%d",&rno);
	printf("\nEnter Subject 1 Mark :");
	scanf("%d",&s1);
	printf("\nEnter Subject 2 Mark :");
	scanf("%d",&s2);
	printf("\nEnter Subject 3 Mark :");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\nStudent Name : %s",sname);
	printf("\nRoll Number : %d",rno);
	printf("\nTotal : %d",total);
	printf("\nPercentage : %lf",per);

	if(per>=70)
	{
		printf("\nDestiction");
	}
	else if(per>=60)
	{
		printf("\nFirst Class");
	}
	else if(per>=50)
	{
		printf("\nSecond Class");
	}
	else if(per>=40)
	{
		printf("\nPass");
	}
	else
	{
		printf("\nFail");
	}

	getch();




}