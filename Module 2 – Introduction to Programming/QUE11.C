#include<stdio.h>
#include<conio.h>

void main()
{
	char str1[50], str2[50];

	clrscr();

	printf("\n Enter First String : ");
	gets(str1);

	printf("\n Enter Second String : ");
	gets(str2);

	printf("\n ============== Concatenate str2 into str1 ==============\n");

	strcat(str1,str2);

	printf("\n Concatenated String : %s\n", str1);

	printf("\n ============ Find Length =========\n");

	printf("\n Length of Concatnated string : %d",strlen(str1));

	getch();
}