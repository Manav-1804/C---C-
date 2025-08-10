#include<stdio.h>
#include<conio.h>

void  oddeven(int num)
{
	if(num%2==0)
	{
		printf("\n Number Is Even");
	}
	else
	{
		printf("\n Number Is Odd");
	}
}
void maxofTwo(int a, int b)
{
	if(a>b)
	{
		printf("\n A is Max");
	}
	else
	{
		printf("\n B is Max");
	}

}

void pattern(int r)
{
	int i,j,k;
	for( i=1;i<=r;i++)
	{
		for(j=0;j<r-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}

void main()

{
	int a,b;
	int num;
	int r;
	clrscr();
	printf("\n Enter Value : ");
	scanf("%d",&num);
	oddeven(num);


	printf("\n Enter A : ");
	scanf("%d",&a);
	printf("\n Enter B : ");
	scanf("%d",&b);
	maxofTwo(a,b);


	printf("\n Enter number of rows : ");
	scanf("%d",&r);
	pattern(r);
	getch();
}