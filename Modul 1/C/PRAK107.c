#include <stdio.h>

int main(void)
{
    int a = 4;
    int b = 5;
    int c = 7;
    int k = a + b + c; //k sebagai keliling
    int harga_tanah_permeter = 85000;
    int biaya_pemasangan = k * harga_tanah_permeter;

printf("Diketahui:\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
printf("Harga Tanah Per Meter adalah %d\n", harga_tanah_permeter);
printf("Jawaban:\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp. %d\n", biaya_pemasangan);
}