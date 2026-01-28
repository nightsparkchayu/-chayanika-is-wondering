#include<stdio.h>
#include<string.h>
int main(){
    char s [100];
    printf("enter a string under 1000\n");
    gets(s);
    int l=strlen(s);
    char fs[100];
    for(int i= l-1;i>=0;i--){
        fs[l-i-1]=s[i];
    }

    fs[l]= '\0';

    printf("the string is reversed as %s",fs);
    return 0;
}