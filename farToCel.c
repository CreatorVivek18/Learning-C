#include <stdio.h>
#include <conio.h>

int main()
{
    float cel, fara;

    printf("Enter Fahrenheit --> ");
    scanf("%f", &fara);

    cel = ((fara-32)*5)/9;

    printf("In Celsius --> %.2f", cel);    

    getch();
    return 0;
}
