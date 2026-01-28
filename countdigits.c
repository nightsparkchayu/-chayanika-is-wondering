#include<stdio.h>
int main(){
    int  f,s=0 ,a;
    printf("enter the number "),
    scanf("%d",&a);
    f=a;
      
    while(a!=0){ 
    int r= a%10 ;
    int c =(r*r*r);
    s=s+c;
    a=a/10;
}

   if(s==f){
    printf("the numebr is an armstron numbr ");
   }
   
   else{
    printf("is not a armstrong number");
   }
return 0;
}