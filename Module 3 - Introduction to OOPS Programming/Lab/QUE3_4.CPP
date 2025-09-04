#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int rows;

	cout<<"\n Enter Number Of Rows: ";
	cin>>rows;

	for(int i=1; i <= rows; i++)
	{
		for(int j=1; j <= i; j++)
		{
			cout << "* ";
		}
		cout<< "\n";
	}
	getch();
}