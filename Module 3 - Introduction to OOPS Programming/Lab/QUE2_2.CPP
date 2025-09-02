#include <iostream.h>
#include <conio.h>

void main() {
    clrscr();

    int num = 10;
    double d = 3.5;

    // Implicit conversion (int → double)
    double result1 = num + d;
    cout << "Implicit conversion result (int + double): " << result1 << endl;

    // Explicit conversion (type casting)
    int result2 = (int)d + num;
    cout << "Explicit conversion result ((int)double + int): " << result2 << endl;

    getch();
}
