#include <stdio.h>
int main()
{
    int p;
    printf("enter any number to check prime or not ");
    scanf("%d", &p);
    int c = 0;
    for (int i = 2; i <= p / 2; i++) {

        if (p % i == 0) {
            c = c + 1;
        }
    }
    if (c == 0)
    {
        printf("the number is prime");
    }
    else
    {
        printf("not prime ");
    }

    return 0;
}