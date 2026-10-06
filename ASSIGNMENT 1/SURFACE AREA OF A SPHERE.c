#include <stdio.h>
#include <stdlib.h>



int main()
{
    float radius;
    float surfaceArea;
    float pi = 3.14159;

    printf("===== SURFACE AREA OF A SPHERE =====\n");

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surfaceArea = 4 * pi * radius * radius;

    printf("\nRadius = %.2f\n", radius);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}
