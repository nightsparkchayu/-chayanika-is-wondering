#include<stdio.h>
int main(){
    int marks[10];
    printf("Enter marks of 10 students: \n");
    for(int i = 0;i<10;i++){
        scanf("%d",&marks[i]);
    }

    printf("%d\n",marks[0]);
    printf("%d\n",marks[9]);
    printf("Full list: \n");
    for(int i = 0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}