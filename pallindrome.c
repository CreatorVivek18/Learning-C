#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rev=0, t;

    printf("Enter the Number --> ");
    scanf("%d", &n);

    t = n;

    while(t!=0) {

        rev = rev*10 + t%10;
        t = t/10;
    }

    if (n==rev)
    {
        printf("Pallindrome");
    }
    
    else{
        printf("Not Pallindrome");
    }

    getch();
    return 0;
}
