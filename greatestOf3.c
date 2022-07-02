#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the Number --> ");    
    scanf("%d", &a);
    
    printf("Enter the Number --> ");    
    scanf("%d", &b);
    
    printf("Enter the Number --> ");    
    scanf("%d", &c);
    
    if (a>b && a>c)
    {   
        printf("%d is the greatest", a);
    }
    
    else if (b>a && b>c)
    {   
        printf("%d is the greatest", b);
    }
    
    else if (c>a && c>a)
    {   
        printf("%d is the greatest", c);
    }
    
    else {
        printf("Maybe all are same");
    }

    return 0;
}
