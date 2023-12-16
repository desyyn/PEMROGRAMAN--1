#include <stdio.h>

int main (void)
{
    int A = 400000;
    int DA = 13; //DA sebagai diskon sepatu A
    int harga_setelah_diskon_A = A - (A*DA/100);
    int B = 350000;
    int DB = 21; //DB sebagai diskon sepatu B
    int harga_setelah_diskon_B = B - (B*DB/100);

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", DA, harga_setelah_diskon_A);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", DB, harga_setelah_diskon_B);
}