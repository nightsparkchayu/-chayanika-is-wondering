#include<stdio.h>
int main(){
    
    char arr[] = "Hello this is chayanika";//null terminator(\0)->indicates that a string ends here

    printf("%d\n",sizeof(arr));//this should return 23, because there are 23 characters in the string, but since C automatically adds a null terminator at the end, the size increases by one

    int c = 0;
    for(int i = 0;i < sizeof(arr);i++){
        if(arr[i]==' ')c++; 
    }


    int b = 0;
    for(int i = 0;i<sizeof(arr);i++){
        if(arr[i]== ' ')b++;

        if(b == 0)printf("%c", arr[i]);
        
        if(b==c)printf("%c", arr[i]);
    }
    return 0;
}