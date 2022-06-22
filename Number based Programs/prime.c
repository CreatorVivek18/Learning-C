#include <stdio.h>
#include <conio.h>

int main()
{
    int num, j = 0;

    printf("Enter the Number --> ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            j = 1;
        
    }
    
    if (j == 1)
        printf("Not Prime");
    
    else
        printf("Prime");

    getch();
    return 0;
}
