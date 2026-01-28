#include<stdio.h>
int a = 15;
int b = 10;
void upgrade(){
    a+=10;
    b+=5;
}

int main(){
    printf("Before change:\na=%d\nb=%d\n",a,b);
    upgrade();
    printf("After change:\na=%d\nb=%d",a,b);
}