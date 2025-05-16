



#include<stdio.h>
int main()
{
    while(1)
    {
        int num,sum=0,r,temp;
        printf("Enter Any Number : ");
        scanf("%d",&num);

        temp = num;

        while(temp!=0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if(num == sum)
            printf("Armstrong Number\n");
        else
            printf("Not Armstrong\n");
    }

    getch();
    return 0;
}



