#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int *p;

	clrscr();

	printf("/n Enter A Number :  ");
	scanf("%d",&a);

	p = &a;

	printf("\n You Entered : %d",a);
	printf("\n Address of A : %u",&a);
	printf("\n Value of Pointer p(address stored) : %u",p);
	printf("\n Value at *p (dereferenced) : %d\n", *p);


	*p = *p + 5;

	printf("\n After Modifying using poniter : ");
	printf("\n New Value Of A : %d",a);
	printf("\n value at *p : %d", *p);

	getch();
}