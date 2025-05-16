
#include<stdio.h>
int main()
{
    while(1)
    {
        int count=0, num, i;
        printf("Enter Any Number : ");
        scanf("%d",&num);

        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Prime Number\n");
        else
            printf("Not Prime\n");
    }

    getch();
    return 0;
}


