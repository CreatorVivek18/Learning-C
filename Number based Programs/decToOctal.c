#include <stdio.h>
#include <conio.h>

int main()
{
    int num, arr[10], i;

    printf("Enter the Number --> ");
    scanf("%d", &num);
    printf("In Binary --> ");

    for (i = 0; num > 0; i++)
    {
        arr[i] = num%8;
        num = num/8;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    
        

    getch();
    return 0;
}
