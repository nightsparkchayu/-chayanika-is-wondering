#include<stdio.h>
int main(){
    int arr[10]={9,3,4,59,6,57,84,9,101,22};
    int max=arr[0];
    int min=arr[0];
   for(int i=0;i<10;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    if(min>arr[i]){
    min=arr[i];
   }}
   printf("the largest number %d",max);
   printf("\n the largest number is %d",min);
   return 0;}