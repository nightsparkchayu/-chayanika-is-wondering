#include <stdio.h>
int main() {
    float price1, price2, total;
    printf("Enter price of item 1: \n");
    scanf("%f", &price1);
    printf("Enter price of item 2: ");
    scanf("%f", &price2);
    total = price1 + price2;
    printf("Total Bill: %f\n", total);
    return 0;
}
