#include<stdio.h>
int main()
{

    for(int i = 5;i>=1;i--){//i = 5

        for(int j = 1;j<=i;j++){//j =1  1\n12\n123\n1234\n12345\n
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

// 12345
// 1234
// 123
// 12
// 1