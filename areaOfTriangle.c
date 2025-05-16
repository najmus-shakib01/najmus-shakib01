
#include<stdio.h>
int main()
{
    float base, hight, area;
    printf("Enter Base : ");
    scanf("%f",&base);

    printf("Enter Hight : ");
    scanf("%f",&hight);

    area = 0.5 * base* hight;
    printf("Area Of Triangle = %.1f\n",area);

    getch();
    return 0;
}
