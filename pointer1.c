#include<stdio.h>
int main(){
    int a = 4389;
    int *p = &a;
    printf("%d", *p);
    int x = *p;
    

    return 0;
}