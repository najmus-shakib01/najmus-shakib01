

#include<stdio.h>
int main()
{
    while(1)
    {
        int years;
        printf("Enter Any Years : ");
        scanf("%d",&years);

        if(years%400==0)
        {
            printf("Leap Year\n");
        }
        if(years%4==0 && years!=100)
        {
            printf("Leap Year\n");
        }
        else
            printf("Not Leap Year\n");
    }

    getch();
    return 0;
}




