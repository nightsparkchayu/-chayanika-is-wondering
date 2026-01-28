#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n = 9;
    int a=0,b=l-1;
    while(a<=b){
        int mid = (a+b)/2;
        printf("%d",arr[mid]);
        if(arr[mid]==n){printf("found at index : %d",mid);exit(0);}
        else if(n>arr[mid])a = mid+1;
        else b = mid-1;
    }
    printf("Not found");


    return 0;
}