#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a[2][2], b[2][2], sum[2][2];
	int i,j;

	cout<<"\n Enter elements of first 2x2 matrix : ";
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cin >> a[i][j];
		}
	}

	cout<<"\n Enter elements of second 2x2 matrix : ";
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	cout<<"\n Resultant Matrix After Addition : \n";
	for(i=0; i < 2; i++)
	{
		for(j=0; j < 2; j++)
		{
			cout<<sum[i][j] << " ";
		}

		cout<<"\n";
	}
	getch();

}