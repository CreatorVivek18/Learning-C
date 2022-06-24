#include <stdio.h>
#include <conio.h>

int main()
{
    int num, j;

    printf("Enter the Number --> ");
    scanf("%d", &num);

    if(num%2 == 0)
    printf("Even");
    
    else
    printf("Odd");

    getch();
    return 0;
}
