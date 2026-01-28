#include<stdio.h>
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int l = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",l);
    for(int i = 0;i<l-1;i++){
        for(int j = 0;j<l-i-1;j++){
            if(arr[j+1]<arr[j]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    for(int i = 0;i<l;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}