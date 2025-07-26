#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("\nEnter A : ");
	scanf("%d" , &a);
	if(a%2==0)
	{
		printf("\n A is Odd");
	}
	else
	{
		printf("\n A is Even");
	}
	getch();

}