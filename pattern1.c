//##*##
//#***#
//*****
#include<stdio.h>
int main(){
    int n;
    printf("enetr the number of lines you want");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=i;k<=n-1;k++){
            printf(" ");
        }
        
    for(int j=1;j<=2*i-1;j++) {
        printf("*");
    
    }
    for(int c=i;c<=n-1;c++){
        printf(" ");
    }
    
    printf("\n");
}}
