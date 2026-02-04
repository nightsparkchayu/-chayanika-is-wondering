#include<stdio.h>
int main(){
    int n;
    printf("enter a number to see if it is a harshad number\n");
    scanf("%d",&n);
    if(n==0){
        printf("not a harshad number never put this value....");
    }
     int c=n;
     int sum=0;
     while(n!=0){
        int x=n%10;
        sum=sum+x;
        n=n/10;

     }
   if(c%sum==0){
    printf("the number is harshad number");
   }
   else{
    printf("not harshad , use nivea");

   }
   return 0;
}