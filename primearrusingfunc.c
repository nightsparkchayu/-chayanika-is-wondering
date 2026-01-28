#include<stdio.h>
void prime(int x){
    int c = 0;
    for(int i = 1;i<=x;i++){
        if(x%i==0){
            c++;
        }
    }
    if(c==2){
        printf("\nPrime.");

    }
    else{
        printf("\nNot prime.");
    }
}

int main(){
    int arr[10] = {5,15,17,19,21,6,93,77,83,11};
    for(int i = 0;i<10;i++){
        prime(arr[i]);        
    }
}
