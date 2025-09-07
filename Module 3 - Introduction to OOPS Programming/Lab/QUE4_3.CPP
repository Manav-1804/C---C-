#include<iostream.h>
#include<conio.h>

int globalVar = 100;
void showLocalScope()
{
	int localVar = 50;

	cout<<"\n Imside Function : ";
	cout<<"\n Local Variable =  "<<localVar;
	cout<<"\n Global Variable = "<<globalVar;
}

void main()
{
	clrscr();
	cout<<"\n In main Function : ";
	cout<<"\n Global Variable = "<<globalVar;

	showLocalScope();

	cout<<"\n Back in main, Global variable = "<<globalVar;

	getch();

}