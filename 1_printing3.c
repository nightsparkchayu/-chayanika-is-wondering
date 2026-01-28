#include <stdio.h>
int main() {
    char letter;
    printf("Enter a letter to encode: ");
    scanf("%c", &letter);
    printf("Encoded letter is: %c\n", letter + 1);
    return 0;
}
