#include<stdio.h>
#include<math.h>
int main(){
    float  t,v;
    printf("enter the temperature and wind velocity  :\n ");
    scanf("%f%f",&t,&v);
    float c= 35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    

printf("\nthe wind chill factor is = %lf\n",c);
     
return 0;


}