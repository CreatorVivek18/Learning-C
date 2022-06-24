#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int n, num, temp, newNum = 0, i = 0, j;

    printf("Enter the Number --> ");
    scanf("%d", &n);

    num = n;
    temp = n;

    while (temp != 0)
    {
        temp = temp/10;
        i++;   
    }
    

    while (num!=0) {

        j = num%10;
        newNum = newNum + pow(j, i);

        num = num/10;
    }

    if (n == newNum) {
        printf("It's Armstrong");
    }
    
    else {
        printf("It's not Armstrong");
    }
    return 0;
}
