#include<stdio.h>
int main()
{
    while(1)
    {
        int mark;
        printf("Enter Marks : ");
        scanf("%d",&mark);

        if(mark>100 || mark<0)
            printf("Invalid Mark\n");

        else if(mark>=80 && mark<=100)
        {
            printf("A+\n");
            printf("Congratulations!\n");
        }

        else if(mark>=70 && mark<=79)
            printf("A\n");

        else if(mark>=60 && mark<=69)
            printf("A-\n");

        else if(mark>=50 && mark<=59)
            printf("B\n");

        else if(mark>=40 && mark<=49)
            printf("C\n");

        else if(mark>=33 && mark<=39)
            printf("D\n");

        else
        {
            printf("Fail\n");
            printf("You Have Try Again\n");
        }
    }

    getch();
    return 0;
}

