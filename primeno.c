//code to check if a number is prime or not

#include<stdio.h>
int main(){
    int n,c = 0; //c count how many numbers n is divisible by

    printf("Enter a number to check: ");
    scanf("%d", &n);//n = 17

    for(int i = 1;i<=n;i++){//1->17             
        if(n%i==0) c = c+1;
    }

    if(c==2){printf("%d is a prime no.", n);}
    else{ printf("%d is not a prime no. ", n);}

    return 0; 
}
