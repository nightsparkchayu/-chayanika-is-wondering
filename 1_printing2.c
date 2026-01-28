#include <stdio.h>
int main() {
    char name[20];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hi %s! I'm your first robot friend in C!\n", name);
    return 0;
}
