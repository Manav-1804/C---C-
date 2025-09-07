#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int  n,i,sum = 0;
	float avg;

	cout<<"\n Enter The Number Of Elements : ";
	cin>>n;

	int arr[50];
	cout<<"Enter "<< n << " Elememts : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}

	avg = (float)sum/n;

	cout<<"\n Sum = " << sum;
	cout<<"\n Average = " << avg;

	getch();

}