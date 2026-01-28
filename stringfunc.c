//<string.h> header file  contains various functions for string

/*
        strlen() -> returns length of the string, (how many characters excluding the \0 )
        int a = strlen(s);

        strcat() -> combines two strings and gives a single string


        strcpy() -> copies one string to another

        strcmp() -> compares two strings and returns -1 if LHS string is alphabetically ahead, 1 if RHS string is alphabetically ahead

        chayanika   anamika, returns 1       
        
        strcmpi() -> same as strcmp, but ignores the case(upper or lower)


*/

#include<stdio.h>
#include<string.h>
int main(){
    char s[] = "abcdefgh";

    printf("%d", strlen(s));


    printf("\n");

    char s1[] = "ijklmnop";
    strcat(s, s1);

    printf("%s", s);

    printf("\n");

    char s2[] = "horipodo";
    char s3[] = " huhu";
    strcpy(s3, s2);
    printf("%s", s3);

    printf("\n");

    char str1[] = "Hello";
    char str2[] = "Hi";
    printf("%d", strcmpi(str1, str2));


}


