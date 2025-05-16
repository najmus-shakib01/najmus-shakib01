
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
        else if(mark>=33 && mark<=100)
        {
            printf("Pass\n");
            printf("Congratulations!\n");
        }
        else
        {
            printf("Fail\n");
            printf("You Have Try Again\n");
        }

    }

    getch();
    return 0;
}
