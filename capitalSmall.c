

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Any Letter : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small\n");

    else if(ch>='A' && ch<='Z')
        printf("Capital\n");
    else
        printf("Not A Letter\n");


    getch();
    return 0;
}





