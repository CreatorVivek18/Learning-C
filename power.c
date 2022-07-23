#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;

    return (a * power(a, b - 1));
}

int main()
{
    int x, y;
    printf("Enter base number --> ");
    scanf("%d", &x);
    printf("Enter Power --> ");
    scanf("%d", &y);
    printf("%d ^ %d = %d\n", x, y, power(x, y));
    return 0;
}
