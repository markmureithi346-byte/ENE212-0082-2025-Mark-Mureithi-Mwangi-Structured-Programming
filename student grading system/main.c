#include <stdio.h>

/*
    START
        DECLARE n, i, name, regNo, marks, grade

        PROMPT "Enter the number of students: "
        INPUT n

        FOR i FROM 1 TO n
            OUTPUT "--- Student ", i, "---"
            PROMPT "Enter registration number: "
            INPUT regNo
            PROMPT "Enter name: "
            INPUT name
            PROMPT "Enter marks: "
            INPUT marks

            IF marks >= 70      THEN grade = 'A'
            ELSE IF marks >= 60 THEN grade = 'B'
            ELSE IF marks >= 50 THEN grade = 'C'
            ELSE IF marks >= 40 THEN grade = 'D'
            ELSE                     grade = 'F'
            END IF

            OUTPUT "Registration Number: ", regNo
            OUTPUT "Name: ", name
            OUTPUT "Marks: ", marks
            OUTPUT "Grade: ", grade

            IF marks >= 40
                OUTPUT "Status: PASS"
            ELSE
                OUTPUT "Status: FAIL"
            END IF
        END FOR

        RETURN 0
    END
*/

int main()
{
    /* --- Variables to hold the student count, details and the grade --- */
    int n, i;
    char name[50], regNo[30];
    float marks;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    /* --- Read and grade each student one by one --- */
    for (i = 1; i <= n; i++)
    {
        printf("\n--- Student %d ---\n", i);

        printf("Enter registration number: ");
        scanf("%s", regNo);

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%f", &marks);

        /* Determine grade: marks are checked from the highest band downwards */
        if (marks >= 70)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        /* Display student information */
        printf("\n===== Student Information =====\n");
        printf("Registration Number: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);

        /* Determine pass/fail: 40 is the pass mark */
        if (marks >= 40)
        {
            printf("Status: PASS\n");
        }
        else
        {
            printf("Status: FAIL\n");
        }
    }

    return 0;
}
