#include <stdio.h>
#include <conio.h>

void main() {
    FILE *fp;
    char str[100];

    clrscr();

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
	printf("Error creating file!");
	getch();
	return;
    }


    printf("Enter a string to write into file: ");
    gets(str);
    fputs(str, fp);

    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
	printf("Error opening file for reading!");
	getch();
	return;
    }
    printf("\nContents of file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
	printf("%s", str);
    }

    fclose(fp);

    getch();
}
