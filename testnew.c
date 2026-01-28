#include<stdio.h>
int main(){

int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

float avg, sum = 0;
int i;


int length = sizeof(ages) / sizeof(ages[0]);


for (i = 0; i < length; i++) {
  sum += ages[i];
}


avg = sum / length;


printf("The average age is: %.2f", avg);
}


// #include<graphics.h>
// int main(){
//   goto( 100,100);
//   printf("fisljfils");
//   return 0;
// }
