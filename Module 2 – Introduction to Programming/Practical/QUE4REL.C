
#include<stdio.h>
#include<conio.h>

void main()

{

	int a,b;

	clrscr();

	printf("\n===========Enter The Values==========\n");

	printf("\n Enter The Value Of A : ");
	scanf("%d",&a);

	printf("\n Enter The Value Of B : ");
	scanf("%d",&b);

	printf("\n============ Relational Operators =========\n");

	printf("\n------- Greater Than > ----------\n");

	if(a>b)
	{
		printf("\n A : %d is Greater Than B : %d = TRUE",a,b);
	}
	else
	{
		printf("\n A : %d is Not Greater Than B : %d = FALSE",a,b);
	}
	printf("\n");
	printf("\n-------- Less Than < ---------\n");

	if(a<b)
	{
		printf("\n A : %d is Less Than B : %d = TURE",a,b);
	}
	else
	{
		printf("\n A : %d is Not Less Than B : %d = FALSE",a,b);
	}

	printf("\n");
	printf("\n----------- Equal To == ---------\n");

	if(a==b)
	{
		printf("\n A : %d is Equal To B : %d = TRUE",a,b);
	}
	else
	{
		printf("\n A : %d is Not Equal To B : %d = FALSE",a,b);
	}

	printf("\n");
	printf("\n--------  Not Equal To != -----------\n");

	if(a != b)
	{
		printf("\n A : %d IS Not Equal to B : %d : True",a,b);
	}
	else
	{
		printf("\n A : %d IS Not Equal to B : %d : False",a,b);
	}

	printf("\n");
	printf("\n---------- Greater Than Or Equal To >= --------\n");

	if(a>=b)
	{
		printf("\n A : %d Is Greater Than Or Equal To B : %d = TRUE",a,b);
	}
	else
	{
		printf("\n A : %d Is Not Greater Than Or Equal To B : %d = FALSE",a,b);
	}

	printf("\n");
	printf("\n ----------- Less Than Or Equal To <= ----------\n");

	if(a<=b)
	{
		printf("\n A : %d Is Less Than Or Equal To B : %d = TRUE",a,b);
	}
	else
	{
		printf("\n A : %d Is not Less Than Or Equal To B : %d = FALSE",a,b);
	}
	getch();


}