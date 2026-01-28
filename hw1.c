#include<stdio.h>
int main(){ 
    int n;
    long  long sum=0;
     printf("enter any number  ");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
     sum=sum+i;
     }
     printf("%lld\n",sum);
     int c=0;

    /**for(int i=2;i<sum/2;i++){
        if(sum%i==0){
            c=c+1;
        }}
if(c==0){
    printf("yes its a prime ");
}
else {
    printf("non prime");
}*/
 
long  long f=sum;
while(f!=0){
    f=f/10;
    c=c+1;
}
printf("%d",c);
return 0;
     }