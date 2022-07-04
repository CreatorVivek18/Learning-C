#include <stdio.h>

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
        printf("%d is not a prime number.", num);
    
    else
        printf("%d is a prime number.", num);


    return 0;
}
