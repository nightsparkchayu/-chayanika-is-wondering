#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to reverse: ");
    scanf("%d",&a);// = 4567

    int x = 0;//new number
    int r = 0;//digits 
    while(a!=0){
        r = a%10;//r = 4
        x = x*10 + r;//x = 7654
        a = a/10;//a= 0
    }

    printf("Reversed number: %d", x);
    
    return 0;

}
