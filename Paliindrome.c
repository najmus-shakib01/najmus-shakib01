


#include<stdio.h>
int main()
{
    while(1)
    {
        int num,sum=0,r,temp;
        printf("Enter Any Number Three Digit : ");
        scanf("%d",&num);

        temp = num;

        while(temp!=0)
        {
            r = temp % 10;
            sum = sum * 10 + r;
            temp = temp / 10;
        }
        if(num == sum)
            printf("Palindrome Number\n");
        else
            printf("Not Palindrome\n");
    }

    getch();
    return 0;
}


