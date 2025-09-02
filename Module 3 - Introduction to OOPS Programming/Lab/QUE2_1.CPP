#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();


    int age = 20;
    float height = 5.9;
    char grade = 'A';

  
    const double PI = 3.14159;

    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;

    
    int newAge = age + 5;
    cout << "Age after 5 years: " << newAge << endl;

    cout << "Value of constant PI: " << PI;

    getch();
}
