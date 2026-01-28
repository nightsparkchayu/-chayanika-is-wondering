#include<stdio.h>
int main(){
    int s,su;
    
    printf("enter the number of subjects and students else you will die- ");
    scanf("%d%d",&s,&su);

    int susu [s][su];
     for (int i=0;i<s;i++){
        printf("enter marks of student %d\n",i);
        for(int j=0;j<su;j++){
            printf(" subject %d\n- ",j);
            scanf("%d",&susu[i][j]);

        }
     }
 printf("%d",susu[0][1]);
}