#include <stdio.h>

int main()
{
    int num, j = 1;

    printf("Enter the Number --> ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        j = j * i;
    }
    
    printf("Factorial of %d is %d", num, j);

    return 0;
}
