#include <stdio.h>
#include <windows.h>

/*

    START
        DECLARE pin, correctPin, attempts
        SET correctPin = 3126

        FOR attempts FROM 1 TO 3
            PROMPT "Enter your PIN: "
            INPUT pin

            IF pin == correctPin
                OUTPUT "Access granted! Door unlocked."
                BREAK              // correct PIN, stop trying
            ELSE
                OUTPUT "Wrong PIN!"
            END IF

            IF attempts == 3      // all attempts used up
                OUTPUT "System locked! Wait for 5 seconds..."
                FOR i FROM 5 DOWN TO 1
                    OUTPUT i
                    SLEEP 1 second
                END FOR
                OUTPUT "You can try again now."
            END IF
        END FOR

        RETURN 0
    END
*/

int main()
{
    /* --- Store the PIN the user types and the PIN that is accepted --- */
    int pin;
    int correctPin = 3126;
    int attempts;

    /* --- Allow up to 3 tries at the door lock --- */
    for (attempts = 1; attempts <= 3; attempts++)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        /* --- Correct PIN: unlock the door and stop the loop --- */
        if (pin == correctPin)
        {
            printf("Access granted! Door unlocked.\n");
            break;
        }
        else
        {
            printf("Wrong PIN!\n");
        }

        /* --- On the third failure, lock the system for a 5 second countdown --- */
        if (attempts == 3)
        {
            printf("System locked! Wait for 5 seconds...\n");

            /* Sleep(1000) pauses execution for 1000 milliseconds = 1 second */
            for (int i = 5; i >= 1; i--)
            {
                printf("%d...\n", i);
                Sleep(1000);
            }

            printf("You can try again now.\n");
        }
    }

    return 0;
}
