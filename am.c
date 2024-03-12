#include <stdio.h>

void add() {
    double a,b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf",&a,&b);
    double sum = a + b;
    printf("The sum of %lf and %lf is %lf\n",a,b,sum);
}

void sub() {
    double a,b;
    printf("Enter two numbers to substract: ");
    scanf("%lf %lf", &a, &b);
    double sum = a - b;
    printf("The diffrence  of %lf and %lf is %lf\n",a,b,sum);
}

void mul() {
    double a,b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    double product = a * b;
    printf("The product of %lf and %lf is %lf\n",a,b,product);
}
void div() {
     double a,b;
     printf("Enter two numbers to divide: ");
     scanf("%lf %lf", &a ,&b);
     if (b == 0) {
        printf("Divison by zero is not possible");
     }
     else{
        double quotient = a / b;        
        printf("The quotient is %lf\n",quotient);
        
     }
}