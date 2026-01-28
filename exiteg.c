#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i = 0;i< 20; i++){
        printf("%d",i);

        if(i==7)exit(0);
    }

    printf("loop exited after 7");
}