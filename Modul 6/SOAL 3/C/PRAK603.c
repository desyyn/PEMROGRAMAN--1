#include <stdio.h>

int main() {
    int nilai1, nilai2, elemen1, elemen2, i;

    scanf("%d %d", &nilai1, &nilai2);

    int baris1[nilai1], baris2[nilai2];

    if (nilai1 == nilai2) {
        for (i = 0; i < nilai1; i++) {
            scanf("%d", &elemen1);
            baris1[i] = elemen1;
        }
        for (i = 0; i < nilai2; i++) {
            scanf("%d", &elemen2);
            baris2[i] = elemen2;
        } printf("\n");

        for (i = 0; i < nilai1; i++) {
            int hasil = baris1[i] * baris2[i];
            printf("%d ", hasil);
        }
    } else {
        printf("\nJumlah tidak sama");
    } 
    return 0;
}