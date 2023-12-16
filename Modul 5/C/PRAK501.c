#include <stdio.h>
//Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d) {
    int result;
    if (a > b && a > c && a > d) {
        result = a;
    } else if (b > a && b > c && b > d) {
        result = b;
    } else if (c > a && c > b && c > d) {
        result = c;
    } else {
        result = d;
    } return result;
}

int main() {
int a, b, c, d; 
scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = MaxBilangan(a, b, c, d);
printf("%d", hasil); 
return 0;
}