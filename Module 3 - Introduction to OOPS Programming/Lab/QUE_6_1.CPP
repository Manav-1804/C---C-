#include<iostream.h>
#include<conio.h>

void reverse(char str[])
{
	int i, len = 0;
	char temp;

	for (i =0; str[i] != '\0';i++)
	len++;

	for (i=0; i<len/2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

void main()
{
	char str[100];
	clrscr();

	cout << "\n Enter A String : ";
	cin.getline(str,100);


	reverse(str);

	cout<< "\n Reversed String : " <<str;

	getch();
}
