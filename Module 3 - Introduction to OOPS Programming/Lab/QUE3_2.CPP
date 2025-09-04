#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    clrscr();
    int guess, number;
    srand(time(0));  
    number = rand() % 100 + 1;   

    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
            cout << "Too High! Try again.\n";
        else if (guess < number)
            cout << "Too Low! Try again.\n";
        else
            cout << "Correct! You guessed the number.\n";

    } while (guess != number);

    getch();
}
