
#include <stdio.h>
int main()
{
    int order, type, choice;

    printf("\n----------Menu Card---------");
    printf("\n 1: Burger");
    printf("\n 2: Pizza");
    printf("\n 3: Drink");
    printf("\n Enter the order := ");
    scanf("%d", &order);

    if (order == 1)//burger
    {
        printf("\nYou selected Burger");
        printf("\nChoose type:=");
        printf("\n1: Veg");
        printf("\n2: Non-Veg");
        printf("\nEnter your choice:=");
        scanf("%d", &type);

        if (type == 1)
        {
            printf("\nSelect your veg burger:");
            printf("\n1: Paneer burger");
            printf("\n2: Aloo tikki burger");
            printf("\n3: Cheese paneer burger");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Paneer burger");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Aloo tikki burger");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Cheese paneer burger");
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
        else if (type == 2)
        {
            printf("\nSelect your Non-Veg burger:");
            printf("\n1: Chicken burger");
            printf("\n2: Egg burger");
            printf("\n3: Chicken tikki burger");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Chicken burger");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Egg burger");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Chicken tikki burger");
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
        else
        {
            printf("\nInvalid type");
        }
    }
    else if (order == 2)//pizza
    {
        printf("\nYou selected Pizza");
        printf("\nChoose type:=");
        printf("\n1: Veg");
        printf("\n2: Non-Veg");
        printf("\nEnter your choice:=");
        scanf("%d", &type);

        if (type == 1)
        {
            printf("\nSelect your veg pizza:");
            printf("\n1: Paneer pizza");
            printf("\n2: Cheese pizza");
            printf("\n3: Veggies pizza");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Paneer pizza");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Cheese pizza");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Veggies pizza");
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
        else if (type == 2)
        {
            printf("\nSelect your Non-Veg pizza:");
            printf("\n1: Chicken pizza");
            printf("\n2: Sausage pizza");
            printf("\n3: Chicken tikki pizza");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Chicken pizza");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Sausage pizza");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Chicken tikki pizza");
            }
            else
            {
                printf("\nInvalid pizza choice");
            }
        }
        else
        {
            printf("\nInvalid type");
        }
    }
    else if (order == 3)// drinks
    {
        printf("\nYou selected Drinks");
        printf("\nChoose type:=");
        printf("\n1: Juice");
        printf("\n2: Soft drinks");
        printf("\nEnter your choice:=");
        scanf("%d", &type);

        if (type == 1)
        {
            printf("\nSelect your juice:");
            printf("\n1: Mango juice");
            printf("\n2: Pineapple juice");
            printf("\n3: Apple juice");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Mango juice");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Pineapple juice");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Apple juice");
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
        else if (type == 2)
        {
            printf("\nSelect your soft drink:");
            printf("\n1: Coco");
            printf("\n2: Sprite");
            printf("\n3: Pepsi");
            printf("\nEnter your choice:");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nYou selected Coco");
            }
            else if (choice == 2)
            {
                printf("\nYou selected Sprite");
            }
            else if (choice == 3)
            {
                printf("\nYou selected Pepsi");
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
        else
        {
            printf("\nInvalid type");
        }
    }
    else
    {
        printf("\nInvalid order number");
    }

    return 0;
}