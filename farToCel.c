#include <stdio.h>

int main()
{
    float cel, fara;

    printf("Enter Fahrenheit --> ");
    scanf("%f", &fara);

    cel = ((fara-32)*5)/9;

    printf("In Celsius --> %.2f", cel);    

    return 0;
}
