
/*Three Number Is Largest*/
#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&number1, &number2, &number3);

    if(number1>number2 && number1>number3)
    {
        printf("First Number Is Big",number1);
    }
    else if(number2>number1 && number2>number3)
    {
        printf("Second Number Is Big",number2);
    }
    else if(number3>number1 && number3>number2)
    {
        printf("Third Number Is Big",number3);
    }
    else
    {
        printf("Number Are Equal");
    }

    getch();
    return 0;
}
