#include <stdio.h>

int main()
{
    int pin;
    int correctPin = 9999;
    int attempts = 3;
    int choice;

    while (attempts > 0)
    {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);

        // Validate PIN length //
        if (pin < 1000)
        {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (pin > 9999)
        {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else
        {
            printf("PIN is exactly 4 digits\n");

            // Check if PIN is correct //
            if (pin == correctPin)
            {
                printf("\nAccess Granted!\n");

                printf("\n=== Device Menu ===\n");
                printf("1. Open Door\n");
                printf("2. Change Username\n");
                printf("3. Change PIN\n");
                printf("4. Exit\n");

                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                    case 1:
                        printf("Access granted. Door unlocked.\n");
                        break;

                    case 2:
                        printf("Change username feature coming soon.\n");
                        break;

                    case 3:
                        printf("Change PIN feature coming soon.\n");
                        break;

                    case 4:
                        printf("Exiting system.\n");
                        break;

                    default:
                        printf("Invalid option! Please try again.\n");
                }

                return 0;
            }
            else
            {
                attempts--;

                if (attempts > 0)
                {
                    printf("Incorrect PIN! Remaining attempts: %d\n",
                           attempts);
                }
            }
        }
    }

    // Lockout after 3 attempts //
    printf("\nSystem locked! Wait for 5 seconds...\n");

    for (int i = 5; i >= 1; i--)
    {
        printf("%d...\n", i);
    }

    printf("You can try again now.\n");

    return 0;
}
