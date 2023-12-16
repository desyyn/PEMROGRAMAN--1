#include <stdio.h>

int main ()
{
    double r, t, phi, LuasAlas, volume, keliling, luas;

    printf("Input\n");
    scanf("%lf" "%lf", &r, &t);
    printf("\nOutput\n");
    phi = 3.14286;
    LuasAlas = phi*r*r;
    keliling = 2*phi*r;
    volume = phi*r*r*t; 
    luas = (2*LuasAlas) + (keliling*t);
    printf("Volume = %0.2f\n", volume);
    printf("Luas = %0.2f\n", luas);
    printf("Keliling = %0.2f\n", keliling);
    return 0;
}