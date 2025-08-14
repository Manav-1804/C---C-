#include<stdio.h>
#include<conio.h>

void main()
{
	int arr1D[5];
	int arr2D[3][3];
	int i,j,sum=0;

	clrscr();

	printf("\nEnter 5 integers for 1D array : ");
	for(i=0;i<5;i++)
	{
		printf("\n Enter %d : ",i+1);
		scanf("%d",arr1D[i]);
	}
		printf("\n 1D Array Elements: ");

	printf("\n =================== 2D Array Input ======================\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j < 3; j++)
		{
			printf("\n Elements [%d][%d] : ",i,j);
			scanf("%d",&arr2D[i][j]);
		}
	}
	printf("\n ====================== 2D Array Output and Calculation==============\n");

	printf("\n 3 x 3 MAtrix : ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d\t",arr2D[i][j]);
			sum += arr2D[i][j];
		}
		printf("\n");
	}
	printf("\n sum of all elements in 3x3 matrix= %d" , sum);

	getch();

}