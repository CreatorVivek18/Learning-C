#include <stdio.h>

int main()
{
    float cel, fara;

    printf("Enter Celsius --> ");
    scanf("%f", &cel);

    fara = (cel * 9/5) + 32;

    printf("In Fahrenheit --> %.2f", fara);    

    return 0;
}
