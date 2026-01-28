#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,k,q,r,s,t,u ,l;
    int marks [5][3];
    

    for(int i=0;i<5;i++){
        printf("enter marks of student %d in maths ,physics and chemistry - ",i);
        scanf("%d%d%d",&marks[i][0],&marks[i][1],&marks[i][2]);
    }


        printf("%d",marks[0][1]);
        return 0;
    
}