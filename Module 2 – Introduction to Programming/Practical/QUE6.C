#include<stdio.h>
#include<conio.h>

void main()

{
	int i;
	clrscr();

	// Using While Loop

	printf("\n =================================");
	printf("\n         While Loop");
	printf("\n =================================");

	printf("\n Enter Numbers using while loop : ");
	i = 1;
	while( i <= 10 )
	{
		printf("%d ",i);
		i++;
	}

	printf("\n =================================");
	printf("\n         For Loop");
	printf("\n =================================");


	printf("\n Enter The Number Using For Loop : ");
	for(i=1; i<=10; i++)
	{
		printf("\n %d ", i);
	}

	printf("\n =================================");
	printf("\n        Do - While Loop");
	printf("\n =================================");

	printf("\n Enter The Number Using Do - While Loop : ");
	i = 1;
	do
	{
		printf("%d " , i);
		i++;
	}
	while (i <= 10);

	getch();

}