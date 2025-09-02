#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int marks;
	cout<<"\n Enter Your Marks : ";
	cin>>marks;

	if(marks >=90)
	{
		cout << "\n Grade : A";
	}
	else if (marks >=75)
	{
		cout<< "\n Grade : B";
	}
	else if (marks >=60)
	{
		cout<< "\n Grade : C";
	}
	else if (marks >=40)
	{
		cout<< "\n Grade : D";
	}
	else
	{
		cout<<"\n Grade : F (fail)";
	}
		getch();
}

