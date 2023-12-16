#include <stdio.h>

int main() {
    int ordo, baris, kolom, x, elemen1, elemen2, hasil;
    
    scanf("%d", &ordo);

    int matriks_A[ordo][ordo], matriks_B[ordo][ordo];

    printf("Matriks A\n");
    for(baris = 0; baris < ordo; baris++) {
        for(kolom = 0; kolom < ordo; kolom++) {
            scanf("%d", &elemen1);
            matriks_A[baris][kolom]= elemen1;
        }
    }
    printf("Matriks B\n");
    for(baris = 0; baris < ordo; baris++) {
        for(kolom = 0; kolom < ordo; kolom++) {
            scanf("%d", &elemen2);
            matriks_B[baris][kolom] = elemen2;
        }
    }
    printf("\nMatriks AxB\n");
    for(baris = 0; baris < ordo; baris++) {
        for(kolom = 0; kolom < ordo; kolom++) {
            for(x = 0, hasil = 0; x < ordo; x++) {
                hasil = hasil + matriks_A[baris][x] * matriks_B[x][kolom];
            }
                printf("%d ", hasil);
            }
            printf("\n");
        }
    return 0;
}