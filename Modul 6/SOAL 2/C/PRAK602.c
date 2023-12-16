#include <stdio.h>

int main() {
    int nilai, elemen;
    scanf("%d", &nilai); //nilai sebagai jumlah ruangan

    int banyak_zetsu[nilai]; 
    
    for(int i = 0; i < nilai; i++) {
        scanf("%d", &elemen); 
        banyak_zetsu[i] = elemen;
    }

    printf("\n"); 

    for (int i = 0; i < nilai; i++) {
        int total = banyak_zetsu[i] * (1+i);
        printf("%d ", total);
    }
    return 0;
}