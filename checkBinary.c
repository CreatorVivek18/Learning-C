#include <stdio.h>

int main()
{
    int n, j;

    printf("Enter the Number --> ");
    scanf("%d", &n);

    while(n>0) {
        j = n%10;

        if (j!=0 && j!=1) {
            printf("Not Binary");
            break;
        }

        n = n/10;
    }

    if (n==0) {
        printf("It's Binary");
    }

    return 0;
}
