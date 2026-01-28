#include<stdio.h>
int main(){
     char q;
     char g;
     int ys, sal;

     printf("\nenter the gender:  ");
     scanf(" %c",&g);
      printf("enter the qualifications:  ");
      scanf(" %c",&q);
      printf("\nthe years of service are: ");
      scanf("%d",&ys);

     if((g=='m'&& ys>=10&& q=='g')||( g=='m'&& ys<10&& q=='p')){        
        printf("the salary is 10000");
     }
     if(g=='m'&& ys>=10&& q=='p'){
        printf("the salary is 11000 ");
     }
     if(g=='m'&& ys<10&& q=='g'){
        printf("the salary is 7000");
     }
     if(g=='f'&& ys>=10&& q=='p'){
        printf("the salary is 12000");
     }
    if(g=='f'&& ys>=10&& q=='g'){
        printf("the salary is 9000 ");
     }
     if(g=='f'&& ys<10&& q=='p'){
        printf("the salary is 10000 ");
     }
     if(g=='f'&& ys<10&& q=='g'){
        printf("the salary is 6000 ");
     }
     return 0;
    }