#include<iostream.h>
#include<conio.h>

void main()
{
	int length, width, area;
	clrscr();

	cout<<"\n Enter Length : ";
	cin>>length;

	cout<<"\n Enter Width : ";
	cin>>width;

	area = length * width;
	cout<<"\n Area Of Rectangle (POP) = " << area;

	getch();
}