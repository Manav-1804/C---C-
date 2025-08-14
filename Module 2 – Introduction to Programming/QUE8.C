#include<stdio.h>
#include<conio.h>

long factorial(int n)
{

	long result = 1 ;
	int i;

	for(i=1; i <= n ; i++)
	{
		result = result * i;
	}

	return result;

}

void main()
{
	int num;
	long fact;

	clrscr();

	printf("\n Enter A Positive Integer : ");
	scanf("%d",&num);

	if(num < 0)
	{
		printf("\n Factorial is not defiued for negative numbers.");
	}
	else
	{
		fact = factorial(num);
		printf("Factorial of %d = %ld",num , fact);
	}

	getch();
}
