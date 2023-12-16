#include <stdio.h>

int main(void)
{
    double a = 958.730; //a sebagai total jumlah pasukan Yu Zhong
    int b = 5; //b sebagai totaljumlah pahlawan
    double c = a / b; //c sebagai jumlah pasukan yang harus dikalahkan oleh masing masing pahlawan

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.3f\n", a);
    printf("Jumlah pahlawan = %d\n", b);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.3f pasukan\n", c);
}