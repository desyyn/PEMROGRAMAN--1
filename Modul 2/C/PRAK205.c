#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, Keliling, Luas;
    //a sebagai tinggi, b sebagai sisi miring, dan c sebagai alas
    printf("Input\n");
    scanf("%f" "%f", &a, &b);
    printf("\nOutput\n");
    c =  sqrt((b*b)-(a*a));
    Keliling = a+b+c;
    Luas = c*a/2;
    printf("Alas = %.0f cm\n", c);
    printf("Tinggi = %.0f cm\n", a);
    printf("Keliling = %.0f cm\n", Keliling);
    printf("Luas = %.0f cm^2", Luas);
    return 0;
}