#include<stdio.h>
int main(){
    // %(modulus) -> remainder
    // + -> add
    // - -> sub
    // * -> mul
    // / -> div(quotient)

    // code to chck if a number is evn or odd

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a%2 ==0 )printf("Even");
    else printf("odd ");


    return 0;
}