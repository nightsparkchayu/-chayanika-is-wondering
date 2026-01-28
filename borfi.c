#include<stdio.h>
int main(){
    for(int p=1;p<=5;p++){
    for(int f=p;f<5;f++){
        printf(" ");
    }
    for(int l=1;l<=2*p-1;l++){
        printf("*");
    }
    printf("\n"); 
   }
    for (int i=5;i>=1;i--){
        for(int k=i;k<5;k++){
            printf(" ");
        }
      for(int j=1;j<=2*i-1;j++){
        printf("*");
      }
      printf("\n");



}
}