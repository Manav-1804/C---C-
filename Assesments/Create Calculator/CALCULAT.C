#include <stdio.h>
#include <conio.h>

// Function definitions
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void main()
{
    int choice, i;
    float num1, num2, result;
    char cont;

    clrscr();   // Clear Turbo C screen

    // Infinite loop using for; breaks when user chooses Exit
    for (i = 1; ; i++)
    {
        // Display Menu
        printf("\n=====================================\n");
        printf("         MENU DRIVEN CALCULATOR       \n");
        printf("=====================================\n");
        printf(" 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Exit\n");
        printf("=====================================\n");

        // Input choice
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            // Input two numbers
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            // Perform operation based on choice
            switch (choice)
            {
                case 1:
                    result = add(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 2:
                    result = subtract(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 3:
                    result = multiply(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 4:
                    if (num2 != 0)
                    {
                        result = divide(num1, num2);
                        printf("Result: %.2f\n", result);
                    }
                    else
                    {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
            }
        }
        else if (choice == 5)
        {
            // Exit loop if user selects 5
            printf("\nExiting program. Thank you!\n");
            break;
        }
        else
        {
            // Invalid choice
            printf("\nInvalid choice! Please select between 1 to 5.\n");
        }

        // Ask if user wants to continue
        printf("\nDo you want to continue? (y/n): ");
        cont = getch();
        printf("%c\n", cont);

        // If user presses n or N, break loop
        if (cont == 'n' || cont == 'N')
        {
            printf("\nExiting program. Thank you!\n");
            break;
        }
    }

    getch();   // Hold screen
}
