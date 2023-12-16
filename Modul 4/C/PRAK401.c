#include <stdio.h>
int main() {
    int bilangan;
    int a;
    char simbol;

    printf("Input\n");
    scanf("%d %c", &bilangan, &simbol);
    printf("Output\n");
    for (int a = 1; a <= 50; a++) {
        if (a % bilangan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", a);
        }
    } 
    return 0;
}