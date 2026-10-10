#include <stdio.h>

/*
    PSEUDOCODE
    ==========
    START
        DECLARE radius, surfaceArea
        SET PI = 3.14159

        PROMPT "Enter the radius: "
        INPUT radius

        surfaceArea = 4 * PI * radius * radius

        OUTPUT "Surface area = ", surfaceArea

        RETURN 0
    END
*/

int main()
{
    /* --- Radius of the sphere and the result we will display --- */
    float radius, surfaceArea;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    /* Surface area of a sphere: 4 * PI * r^2 */
    surfaceArea = 4 * 3.14159 * radius * radius;

    printf("Surface area = %.2f\n", surfaceArea);

    return 0;
}
