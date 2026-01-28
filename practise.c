// 55555
// 4444
// 333
// 22
// 1


// * * * * *     00 01 02 03 04
// *       *     10          14
// *       *     20          24
// *       *     30          34
// * * * * *     40 41 42 42 44

#include<stdio.h>
int main(){
    
    for(int i = 5;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0;i<5;i++){
        for(int j  = 0;j<5;j++){
            if(i ==0 || i == 4 || j == 0|| j==4)
                printf("* ");
            else 
                printf("  ");

        }
        printf("\n");
    }
    return 0;
}

