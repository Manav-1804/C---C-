#include<iostream.h>
#include<conio.h>


void main()
{

	char name[30];
	int age;
	clrscr();

	cout<<"\n Enter Your Name : ";
	cin>>name;

	cout<<"\n Enter Your Age : ";
	cin>>age;

	cout<<"\n Hello " << name << " ! You are " << age << " Years old.";
	getch();
}