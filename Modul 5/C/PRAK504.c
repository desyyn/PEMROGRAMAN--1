#include <stdio.h>

int reverse(int bilangan){
// Lengkapi Function ini
    int reverse = 0;
    int sisa = 0;
    while (bilangan != 0) {
        sisa = bilangan % 10;
        reverse = reverse * 10;
        reverse = reverse + sisa;
        bilangan = bilangan / 10;
    }
    return reverse;
}
int main() {
 int A, B;
 scanf("%d %d",&A,&B);
 A=reverse(A);
 B=reverse(B);
 int C = A+B;
 printf("%d",reverse(C));
}