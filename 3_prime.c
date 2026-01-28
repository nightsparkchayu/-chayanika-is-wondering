#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 2;i<=(int)sqrt(n);i++)if(n%i==0){printf("Not prime");exit(0);}
    printf("Prime, %d",(int)sqrt(n) );
    return 0;
}