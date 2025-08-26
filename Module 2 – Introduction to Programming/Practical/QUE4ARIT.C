#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,add,sub,mul, div;

	clrscr();

	printf("\n=======================================");

	printf("\n Enter A value : ");
	scanf("%d",&a);

	printf("\n Enter B Value : ");
	scanf("%d",&b);

	printf("\n========== Arithmatic Operators =============\n");

	printf("\n--------- Addition ----------\n");
	add= a+b;
	printf("\nAddition between A and B : %d\n",add);

	printf("\n--------- Subtraction ----------\n");
	sub= a-b;
	printf("\nSubtraction between A and B : %d\n",sub);

	printf("\n--------- Multiplication ----------\n");
	mul= a*b;
	printf("\nMultiplication between A and B : %d\n",mul);

	printf("\n--------- Division ----------\n");
	div= a/b;
	printf("\nDivision between A and B : %d\n",div);

	printf("\n-------- Find Module Using If Statment ---------\n");
	if(div%2==0)
	{
		printf("\n Addition is Odd");
	}
	else
	{
		printf("\n Addition is Even");
	}


	getch();

}