#include <iostream.h>
#include <conio.h>

class Rectangle {
    int length, width;
public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    int area() {
        return length * width;
    }
};

void main() {
    clrscr();
    Rectangle r;
    r.input();
    cout << "Area of rectangle (OOP) = " << r.area();
    getch();
}

