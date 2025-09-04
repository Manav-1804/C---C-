#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int num;

	cout<<"\n Enter a number: ";
	cin>>num;

	cout<<"\n Multiplication Table " << num << ":\n";
	for(int i=1;i<=10;i++)
	{
		cout<<"\n" << num << " x " << i << " = " << num * i << "\n";
	}

	getch();
}