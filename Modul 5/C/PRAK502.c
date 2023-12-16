#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
//Lengkapi Function ini
    int hasil_hitung = nilai1 - nilai2;
    if (hasil_hitung < 0) {
        return -hasil_hitung;
    } else {
        return hasil_hitung;
    }
}

int mutlak(int angka) {
//Lengkapi Function ini
    if (angka < 0) {
        return -angka;
    } else {
        return angka;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);
    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));
    return 0;
}