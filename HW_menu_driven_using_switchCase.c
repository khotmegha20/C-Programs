#include <stdio.h>

int main()
{
    int option, n, length, width, num, costprice, sellingprice;
    float celsius, fahrenheit;

    printf("\n----------Menu---------");
    printf("\n 1: Check even or odd");
    printf("\n 2: Area of rectangle");
    printf("\n 3: Check negative or positive");
    printf("\n 4: Profit or Loss");
    printf("\n 5: Convert Celsius to Fahrenheit");
    printf("\n 6: Convert Fahrenheit to Celsius");
    printf("\nEnter the option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Enter the number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
        break;

    case 2:
        printf("Enter the length and width: ");
        scanf("%d%d", &length, &width);
        printf("The Area of Rectangle is = %d\n", length * width);
        break;

    case 3:
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("The number is positive\n");
        }
        else
        {
            printf("The number is negative\n");
        }
        break;

    case 4:
        printf("Enter the Cost Price and Selling Price: ");
        scanf("%d%d", &costprice, &sellingprice);
        if (costprice < sellingprice)
        {
            printf("Profit\n");
        }
        else if (costprice > sellingprice)
        {
            printf("Loss\n");
        }
        else
        {
            printf("No Profit No Loss\n");
        }
        break;

    case 5:
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
        break;

    case 6:
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
        break;

    default:
        printf("Invalid option\n");
    }

    return 0;
}