/*Write A Program That Solved Quadratic Equation.*/
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x1,x2;

    printf("Enter Value Of A = ");
    scanf("%f",&a);

    printf("Enter value Of B = ");
    scanf("%f",&b);

    printf("Enter value Of C = ");
    scanf("%f",&c);

    d = (b * b) - (4 * a * c);

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d) / (2 * a));

    printf("The Value Of x1 = %.2f\nAnd The Value of x2 = %.2f",x1,x2);

    getch();
    return 0;
}
