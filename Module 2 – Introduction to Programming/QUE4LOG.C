#include<stdio.h>
#include<conio.h>

void main()
{

	int a,b,c;

	clrscr();

	//Get Input From User

	printf("\n Enter The Value Of A :  ");
	scanf("%d",&a);

	printf("\n Enter The Value Of B :  ");
	scanf("%d",&b);

	printf("\n Enter The Value Of C :  ");
	scanf("%d",&c);

	printf("\n ===========================");
	printf("\n        Logical Operator");
	printf("\n ===========================\n");


	printf("\n--------- END && Operator ---------\n");

	if( a>b && b>c )
	{
		printf("\n A > B && B > C = True");
	}
	else
	{
		printf("\n A > B && B > C = False");
	}
	printf("\n");
	printf("\n --------- OR || Operator -----------\n");

	if( a>b || b>c )
	{
		printf("\n A > B || B > C : = True");
	}
	else
	{
		printf("\n A > B || B > C = False");
	}
	printf("\n");
	printf("\n --------- NOT ! Operatore ------------\n");

	if(!a )
	{
		printf("\n !(A) A Is Zero = True");
	}
	else
	{
		printf("\n !(A) A Is Not Zero= False");
	}

	getch();
}
