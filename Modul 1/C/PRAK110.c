#include <stdio.h>
#include <math.h> 

int main(void)
{
    int C = 5;
    int A = 12;
    int B = sqrt(A*A+C*C);
    int K = 30;
    int L = 30;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", A);
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm\n", L); 
}