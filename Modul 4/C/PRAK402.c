#include <stdio.h>
int main() {
    int bilangan;
    printf("Input\n");
    scanf("%d", &bilangan);
    printf("Output\n");

    for (int i = 1; i <= bilangan; i++) { 
        //i <= bilangan menyatakan loop akan terus berjalan selama i <= bilangan
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = bilangan; i>= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}