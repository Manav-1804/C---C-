#include<iostream.h>
#include<conio.h>

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

float divide(int a, int b)
{
	if(b==0)
	{
		cout<<"Error! Division by zero ." << endl;
		return 0;
	}
	return (float) a / b;
}

void main()
{
	clrscr();
	int a,b,choice;

	cout<<"\n Enter Two Numbers: ";
	cin>> a >> b;

	cout<< "\n1. ADD \n2. Subtract \n3. Multiply \n4. Divide\n";
	cout<< "\n Enter Your Choice: " ;
	cin>> choice;

	switch (choice)
	{
		case 1:
		cout<< "Result = " << add(a,b);
		break;

		case 2:
		cout<< "Result = " << subtract(a,b);
		break;

		case 3:
		cout<< "Result = " << multiply(a,b);
		break;

		case 4:
		cout<< "Result = " << divide(a,b);
		break;

		default :
		cout<< "Invalid Choice! ";
	}

	getch();
}
