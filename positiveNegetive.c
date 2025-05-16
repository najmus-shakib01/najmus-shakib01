


#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number : ");
    scanf("%d",&num);

    if(num>0)
        printf("Positive");
    else if(num<0)
        printf("Negetive");
    else
        printf("Zero");

    getch();
    return 0;
}






