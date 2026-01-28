#include <stdio.h>
int main()
{
    int a[10] = {5, 3, 87, 12, 0, 4, 67, 43, 44, 24};
   int b;
    printf("enter the no.");
    scanf("%d",&b);

    for (int i=0;i<10;i++){
        if(a[i]== b){
            printf("the no.is found t ndex %d",i);
            break;
        }
    }
}