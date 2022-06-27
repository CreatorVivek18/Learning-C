#include <stdio.h>

int main()
{
    int n, sum = 0, temp = 0;

    printf("Enter the Number --> ");
    scanf("%d", &n);

    while(n>0) {
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }

    printf("The sum is %d", sum);

    return 0;
}
