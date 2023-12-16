#include <stdio.h>

int main() {
    printf("Input\n");
    int angka1, angka2;
    scanf("%d %d", &angka1, &angka2);
    int a = angka1;
    int b = angka2;
    printf("Output\n");

    if (angka1 < angka2) {
        for (int i = angka1; i <= angka2; i++, a++, b--) {
            printf("%d %d", a, b);
            if (a == angka2) {
                break;
            } else {
                printf(" - "); }
        }
    } else {
        for (int i = angka2; i <= angka1; i++, a--, b++) {
            printf("%d %d", a, b);
            if (a == angka2) {
                break;
            } else {
                printf(" - "); }
        }
    }
    return 0;
}