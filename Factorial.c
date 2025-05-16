
#include<stdio.h>
int main()
{
    while(1)
    {
        int n, i, fact=1;
        printf("Enter Any Positive Number : ");
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            fact = fact * i;
        }
        printf("%d\n",fact);
    }

    getch();
    return 0;
}
