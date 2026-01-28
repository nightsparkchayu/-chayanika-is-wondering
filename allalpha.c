#include <stdio.h>
#include<ctype.h>
#include <string.h>
int main()
{
    char arr[100] = "ram is FHzj lioihiz";

    int f = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        int c = 0;
        for (int j = 0; j < strlen(arr); j++)
        {
            if (i == tolower(arr[j]))
            {
                c = c + 1;
            }
        }

        if (c == 0)
        {
            f = f + 1;
            break;
        }
    }
    if (f > 0)
    {
        printf("doesnt contain the alphabet");
    }
    else
    {
        printf("the string contains the whole alphabet");
    }
    return 0;
}