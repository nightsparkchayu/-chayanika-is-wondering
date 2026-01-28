#include<stdio.h>
int main(){
    int n;
    printf(" enter the umer: ");
    scanf("%d",&n);
    int x=0,r;
    int t=n;
    while(n!=0){
        r = n%10;
        x = x*10 + r;
       n= n/10;
    }

    if(t==x)printf("Palindrome");
    else printf("not palindrome");

    return 0 ;
}