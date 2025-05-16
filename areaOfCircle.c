

#include<stdio.h>
int main()
{
    float radius, area;
    printf("Enter Radius : ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius;
    printf("Area Of Circle = %.2f\n",area);


    getch();
    return 0;
}

