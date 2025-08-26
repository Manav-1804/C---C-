#include<stdio.h>
#include<conio.h>

void main()
{
	int i,limit;

	clrscr();

	printf("\n Enter The Limit : ");
	scanf("%d",&limit);

	printf("\n Numbers (skip 3 , Stop at 5) : ");

	for(i=1;i<=limit;i++)
	{
		if(i==3)
		{
			continue;
		}
		if(i==5)
		{
			break;
		}
		printf("\n %d ",i);
	}
	getch();
}
