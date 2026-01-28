#include <stdio.h>

int main()
{
    int a;

    for (int j = 1; j <= 5; j++)
    {
        int c = 0;
        printf("\nenter a number: ");
        scanf("%d", &a);
        int comp[10] = {1, 2, 3, 4, 5, 6, 34, 7, 54, 98};
        for (int i = 0; i <= 9; i++)
        {
            if (a == comp[i])
            {
                c = c + 1;
            }
        }
        if (c > 0)
        {
            printf("\nno.  found ");
        }
        else
        {
            printf("\nno. not found ");
        }
    }

    return 0;
}
