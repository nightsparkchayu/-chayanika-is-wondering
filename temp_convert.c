#include<stdio.h>
int main(){
char ch;
float c ,f;

printf(" enter your choice:  c or f :  ");
scanf("%c",&ch);

if(ch=='c'){
    printf(" enter the value of c");
    scanf("%f",&c);
    printf("%.2f is the value transformed in f",( c*9/5)+32);
}
else if(ch=='f'){
printf("ener the value of f");
scanf("%f",&f);
printf(" %.2f is the transformed value" ,(f-32)*5/9);
}
else{
    printf("not available");

}
return 0;
}



