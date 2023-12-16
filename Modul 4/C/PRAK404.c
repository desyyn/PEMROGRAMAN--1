#include <stdio.h>
int main() {
    int i, pilihan, hasil;
    float nilai1, nilai2;

    while(1) { 
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        if (pilihan == 5 ) {
            printf("Terimakasih, telah menggunakan kalkulator Dessy Nurulita\n\n");
            break;
        } else if (pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        } else {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &nilai2);
         if (pilihan == 1) {
            printf("Hasil penjumlahan antara %0.2f dengan %0.2f adalah %0.2f\n\n", nilai1, nilai2, nilai1 + nilai2);
        } else if (pilihan == 2) {
            printf("Hasil pengurangan antara %0.2f dengan %0.2f adalah %0.2f\n\n", nilai1, nilai2, nilai1 - nilai2);
        }  else if (pilihan == 3) {
            printf("Hasil perkalian antara %0.2f dengan %0.2f adalah %0.2f\n\n", nilai1, nilai2, nilai1 * nilai2);
        }  else if (pilihan == 4) {
            printf("Hasil pembagian antara %0.2f dengan %0.2f adalah %0.2f\n\n", nilai1, nilai2, nilai1 / nilai2);
        }
        }
    }
    return 0;
}