#include<stdio.h>
#include<conio.h>

void main()
{

	/** Variable Declaration **/
	int age;
	char name[30];
	float height;

	const int year = 2025;


	/* CLRSCR For Clear Screen */

	clrscr();

	/* Input from User */

	printf("\n Enter Your Age (int) : ");
	scanf("%d",&age);

	printf("\n Enter Your Name (char) : ");
	scanf("%s",&name);


	printf("\n Enter Your Height (float) : ");
	scanf("%f",&height);


	// OutPut Values

	printf("\n ------------------ Displaynig  Variables and Constants ---------------");
	printf("\n Age (int) : %d",age);
	printf("\n Name (char) : %s",name);
	printf("\n Height (float) : %f",height);
	printf("\n Year (constant) : %d",year);


	//Wait For Key Press Before Closing
	getch();
}