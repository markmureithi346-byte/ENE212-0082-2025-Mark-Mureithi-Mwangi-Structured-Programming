
#include <stdio.h>

// Declare the functions
int login();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main()
{
    // Declare and initialize variables
    float balance = 5000.00;
    int choice;

    // Check whether the user successfully logs in
    if (login() == 1)
    {
        printf("\nLogin successful!\n");

        // Repeat the ATM menu until the user chooses to exit
        do
        {
            printf("\n===== ATM MENU =====\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");

            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            // Perform an operation based on the user's choice
            switch (choice)
            {
                case 1:
                    checkBalance(balance);
                    break;

                case 2:
                    balance = deposit(balance);
                    break;

                case 3:
                    balance = withdraw(balance);
                    break;

                case 4:
                    printf("\nThank you for using our ATM!\n");
                    break;

                default:
                    printf("\nInvalid choice. Please try again.\n");
            }

        } while (choice != 4);
    }
    else
    {
        printf("\nAccess denied. Your account is locked.\n");
    }

    return 0;
}

// Function to verify the user's PIN
int login()
{
    int pin;
    int storedPIN = 3125;
    int attempts;

    // Allow the user only three attempts
    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &pin);

        if (pin == storedPIN)
        {
            return 1;
        }
        else
        {
            printf("Incorrect PIN. Attempts remaining: %d\n", 3 - attempts);
        }
    }

    return 0;
}

// Function to display the current account balance
void checkBalance(float balance)
{
    printf("\nYour current balance is: KSh %.2f\n", balance);
}

// Function to deposit money
float deposit(float balance)
{
    float amount;

    printf("\nEnter amount to deposit: KSh ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance = balance + amount;

        printf("\nDeposit successful!\n");
        printf("New balance: KSh %.2f\n", balance);
    }
    else
    {
        printf("\nInvalid amount. Deposit must be positive.\n");
    }

    return balance;
}

// Function to withdraw money
float withdraw(float balance)
{
    float amount;

    printf("\nEnter amount to withdraw: KSh ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("\nInvalid amount. Enter a positive amount.\n");
    }
    else if (amount > balance)
    {
        printf("\nInsufficient balance!\n");
    }
    else
    {
        balance = balance - amount;

        printf("\nWithdrawal successful!\n");
        printf("Remaining balance: KSh %.2f\n", balance);
    }

    return balance;
}
