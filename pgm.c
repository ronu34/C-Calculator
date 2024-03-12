#include <stdio.h>
#ifndef PGM_C
#define PGM_C
void pgmarea() {
    char unit[10];
    printf("Enter the unit of base and height : ");
    scanf("%s", unit);
    double b,h;
    printf("Enter the base and height of parallelogram : ");
    scanf("%lf %lf", &b,&h);
    double area = b * h;
    printf("The area of the parallelogram is %lf%s.sq\n", area, unit);
}

void pgmperi() {
    char unit[10];
    printf("Enter the unit of mesurement : ");
    scanf("%s", unit);
    double side;
    printf("Enter length of the side : ");
    scanf("%lf" , &side);
    double perimeter = 4 * side;
    printf("The perimeter of parallelogram is %lf%s\n", perimeter, unit);
}

void pgmheight() {
    char unit[10];
    printf("Enter the unit of mesurement : ");
    scanf("%s", unit);
    double area , base;
    printf("Enter the area: ");
    scanf("%lf", &area);
    printf("Enter the base: ");
    scanf("%lf", &base);
    if (base == 0) {
        printf("Invalid base");
    }
    else{
        double height = area / (double) base;
        printf("The height of the parallelogram is %lf%s\n", height, unit);
    }
}

void pgmbase() {
    char unit[10];
    printf("Enter the unit of mesurement : ");
    scanf("%s", unit);
    double area , height;
    printf("Enter the area : ");
    scanf("%lf", &area);
    printf("Enter the height : ");
    scanf("%lf", &height);
    double base = area / height;
    if (base == 0)
    {
        printf("Invalid base");
    }
    else
    {
        printf("The base of the parallelogram is %lf%s\n", base, unit);
    }
    
}

#endif