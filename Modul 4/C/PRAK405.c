#include <stdio.h>
int main() {
    printf("Input\n");
    int angka1, angka2, x, y, total;
    scanf("%d %d", &angka1, &angka2);
    printf("Output\n");

    for (int i = 1; i <= angka1; i++) {
        int a = i;
        while (a > 1) {
            printf("(%d * %d) + ", a, angka2);
            a--;
        }
        int b = 1;
        int hasil = i * angka2;
        while (b < i) {
            hasil += b * angka2; //menyimpan hasil operasi untuk setiap iterasi
            b++;
        }
        printf("(%d * %d) = %d\n", a, angka2, hasil);
    }

    // Menghitung hasil akhir nilai dari penjumlahan
    x = 1;
    y = 1;
    total = 0;
    while (x <= angka1) {
        total += y * angka2;
        y += x + 1;
        x++;
    }
    printf("%d\n", total);
    return 0;
}