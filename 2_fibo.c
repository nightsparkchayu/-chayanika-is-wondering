#include<stdio.h>
//0,1,1,2,3,5,8,13,21,.....

int main(){
    long a = 0, b = 1,n;//initialisation
    printf("Enter no. of terms: ");
    scanf("%d", &n);

    if(n==0)printf("No output....");
    else if(n==1)printf("%ld",a);
    else if(n==2)printf("%ld %ld",a,b);
    else{
        printf("%ld\n%ld\n",a,b);
        for(int i = 3;i<=n;i++){
            long c = a + b;
            printf("%d\n", c); //c = 8
            a = b;              //a = 5
            b = c;              //b = 8
        }
    }
    return 0;

}