#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Simple Calculator\n");
    printf("1. ADD (+)\n");
    printf("2. SUB (-)\n");
    printf("3. MULTIPLY (*)\n");
    printf("4. DIVIDE (/)\n");

    printf("Enter Your Choice(1-4): ");
    scanf("%d", &choice);

    printf("Enter Your First Num: ");
    scanf("%f", &num1);
    printf("Enter Your Second Num: ");
    scanf("%f", &num2);

    if (choice == 1)
    {
        result = num1 + num2;
        printf("Result=%2.f\n", result);
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        printf("Result=%2.f\n", result);
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        printf("Result=%2.f\n", result);
    }
    else if (choice == 4)
    {
        if (num2 == 0)
        {
            printf("Error: cannot divide by 0");
        }
        else
        {
            result = num1 / num2;
            printf("Result=%2.f\n", result);
        }
    }
    else
    {
        printf("Invalid choice\n");
    }
    
    return 0;
}