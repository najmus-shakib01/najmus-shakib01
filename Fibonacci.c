
#include<stdio.h>
int main()
{
    int first=0, second=1, count=0, n, fibo;
    printf("Enter Range : ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ",fibo);
        count++;
    }

    getch();
    return 0;
}
