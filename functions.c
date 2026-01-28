//functions
//piece of code, jeta bar bar kore use korte pari
#include<stdio.h>
void omlette(int n){
    if(n%2==0){
        printf("%d is an even number.",n);
    }
    else{
        printf("%d is an odd number.",n);
    }
}

int add(int a, int b){
    return (a+b);
}

int main(){

    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    omlette(a);//function calling

    // int x = add(6,9);
    printf("\n%d",add(6,9));


}