#include <stdio.h>
#include <string.h>

int main()
{
    char area[10];
    printf("Please Choose the shape (Circle, Rectangle, Triangle): ");
    scanf("%s", area);

    if (strcmp(area, "Circle") == 0 || strcmp(area, "circle") == 0)
    {
        float PI = 3.1416;
        float radius;
        printf("Enter the radius for the circle: ");
        scanf("%f", &radius);
        float Area = PI * radius * radius;
        printf("Area = %.2f", Area);
    }
    else if (strcmp(area, "Rectangle") == 0 || strcmp(area, "rectangle") == 0)
    {
        int width, length;
        printf("Enter the width & length for the Rectangle: ");
        scanf("%d %d", &width, &length);
        int Area = width * length;
        printf("Area = %d", Area);
    }
    else if (strcmp(area, "Triangle") == 0 || strcmp(area, "triangle") == 0)
    {
        float base, height;
        printf("Enter the base & height for the Triangle: ");
        scanf("%f %f", &base, &height);
        float Area = (1/2.0) * base * height;
        printf("Area = %.2f", Area);
    }
    else
    {
        printf("Invalid shape");
    }

    return 0;
}
