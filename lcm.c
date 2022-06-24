#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, maxNum;

    printf("Enter the Number --> ");
    scanf("%d", &num1);

    printf("Enter the Number --> ");
    scanf("%d", &num2);
    
    maxNum = num1>num2 ? num1 : num2;
    
    while (1)    
    {
        if (maxNum%num1 == 0 && maxNum%num2 == 0)
        {
            printf("LCM is %d", maxNum);
            break;
        }
        ++maxNum;
        
    }
    


    getch();
    return 0;
}
