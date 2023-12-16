#include <stdio.h>
void Biodata(int tahunLahir, char Namaku[20], char Asal[15]){
    int tahun_sekarang = 2020;
// Lengkapi Function ini
    printf("Perkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunLahir);
    printf("Saya adalah angkatan : %d\n", tahun_sekarang);
    printf("Asal saya dari : %s\n", Asal);
}
int main() {
int tahunLahir;
 char Namaku[20], Asal[15];
 scanf(" %d",&tahunLahir);
 scanf(" %[^\n]%*c",&Namaku);
 scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0;
}