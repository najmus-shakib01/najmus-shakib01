

#include<stdio.h>
int main()
{
    int num,sum=0,r,temp;
    printf("Reverse Number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0){
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    printf("The Reveres Number = %d\n",sum);

    getch();
    return 0;
}

