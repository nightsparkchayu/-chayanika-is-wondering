#include<stdio.h>
int main(){
    int c=0;

    int arr[100]={1,3,2,7,9,11,15,13,17};
    for(int i=0;i<=8;i++){
        if(arr[i]%2==0){
            c=c+1;
            break;
        }
    }
        if(c>0){
            printf("no all values are not odd");
        }  
        else{
            printf("yes all values are odd ");
        }
    
}