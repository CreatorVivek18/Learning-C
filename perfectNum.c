#include <stdio.h>

int main()
{
    int num, sum = 0, j;

    printf("Enter the Number --> ");
    scanf("%d", &num);

    for (int i = 1; i <= num/2; i++)
    {
        j = num%i;

        if (j == 0) 
        {
            sum = sum + i;
        }
        
    }
    
    if (sum == num)
    {
        printf("Perfect Number.");
    }

    else
    {
        printf("Not Perfect.");
    }
    

    return 0;
}
