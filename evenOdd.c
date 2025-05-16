
#include<stdio.h>
int main()
{
    while(1)
    {
        int num;
        printf("Enter Any Number : ");
        scanf("%d",&num);

        if(num%2==0)
        {
            printf("EVEN\n");
        }
        else
            printf("ODD\n");
    }

    getch();
    return 0;
}



