#include <stdio.h>

int main()
{
    double Nilai_Pertama, Nilai_Kedua, Nilai_Hasil;

    printf("Input\n");
    printf("Masukkan Nilai Pertama: ");
    scanf("%lf", &Nilai_Pertama);
    printf("Masukkan Nilai Kedua: ");
    scanf("%lf", &Nilai_Kedua);
    printf("Output\n");
    Nilai_Hasil = Nilai_Pertama + Nilai_Kedua;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%.1lf\" adalah %.2lf", Nilai_Pertama, Nilai_Kedua, Nilai_Hasil);
    return 0;
}