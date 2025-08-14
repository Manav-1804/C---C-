#include<stdio.h>
#include<conio.h>

void main()
{

	int num,month;

	clrscr();

	// Even Or Odd

	printf("\n====================================");
	printf("\n              Even Or Odd");
	printf("\n====================================");

	printf("\n Enter A Number : ");
	scanf("%d",&num);

	if(num % 2 == 0)
	{
		printf("\n %d Is Even. ",num);
	}
	else
	{

		printf("\n %d Is Odd. ",num);
	}

	//  Get Month Name Using Switch Case

	printf("\n===============================");
	printf("\n           Month Name ");
	printf("\n===============================");

	printf("\n Enter The Month Number ( 1 - 12) : ");
	scanf("%d",&month);

	printf("\n Month Name: ");

	switch(month)
	{
		case 1:
		printf("January");
		break;

		case 2:
		printf("February");
		break;

		case 3:
		printf("March");
		break;

		case 4:
		printf("April");
		break;

		case 5:
		printf("May");
		break;

		case 6:
		printf("June");
		break;

		case 7:
		printf("July");
		break;

		case 8:
		printf("August");
		break;

		case 9:
		printf("September");
		break;

		case 10:
		printf("Octomber");
		break;

		case 11:
		printf("November");
		break;


		case 12:
		printf("Decmeber");
		break;

		default:
		printf("\nInValid Month Number!!!!!");
		break;
	}
	getch();

}