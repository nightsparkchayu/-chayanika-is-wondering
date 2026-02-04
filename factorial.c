#include <stdio.h>
int f(int n)
{

    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    return fact;
}
int main(){

    int n;
    printf("enter a number to check if it is a strong number :");
    scanf("%d", &n);
    int c;
    c=n;
    int sum=0;
      while(n!=0){
        int x=n%10;
       sum=sum +f(x); 
       n=n/10;      

      }
      if(c==sum){
        printf("the number is strong ");
      }
      else{
        printf("the no. is weak");
      }
    
    return 0;
}