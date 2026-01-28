#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 2000;
    int ch;
    int d, w;
    
    printf("welcome to international simple bank system\n ");
    while (1)
    { // while(1) indicates always true, until break statements used
        printf("\n enter your choice:  1) deposit money\n 2)withdraw money\n 3) show balance  4) exit the website\n :  ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf(" enter the amount you want to deposit: ");
            scanf("%d", &d);
            b = b + d;
            printf(" the balance after deposition is %d", b);
            break;

        case 2:
            printf("enter the amount of withdrawal: ");
            scanf("%d", &w);
            if (w > b)
            {
                printf("insufficient bank balance !!");
            }
            else
            {
                b = b - w;
                printf("the balance after withdrawal is %d", b);
            }
            break;

        case 3:
            printf("%d", b);
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("unavailable option ");
        }
    }
    return 0;
}
