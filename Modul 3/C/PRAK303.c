#include <stdio.h>
int main(){
    int bilangan;
    printf("Input\n");
    scanf("%d", &bilangan);
    printf("Output\n");
    if (bilangan > 0) {
        printf("positif");
    } else if (bilangan < 0) {
        printf("negatif");
    } else {
        printf("nol");
    }
return 0;
}