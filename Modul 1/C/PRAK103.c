#include <stdio.h>

int main(void)
{
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    float hasil = (a+b)*x/y;

    printf("Variabel a bernilai 9\n", a);
    printf("Variabel b bernilai 6\n", b);
    printf("Variabel x bernilai 10\n", x);
    printf("Variabel y bernilai 7\n", y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f\n", hasil);
}