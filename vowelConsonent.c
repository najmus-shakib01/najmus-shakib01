
#include<stdio.h>
int main()
{
    while(1)
    {
        char ch;
        printf("Enter Any Letter : ");
        scanf("%c",&ch);

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }


    getch();
    return 0;
}
