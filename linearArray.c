
#include <stdio.h>
int main()
{

    int size;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &size);

    int linearArray[size];
    printf("Enter %d Elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &linearArray[i]);
    }

    printf("Elements In The Array Are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", linearArray[i]);
    }
    printf("\n");

    getch();
    return 0;
}
