#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char input1[MAX], input2[MAX];
    int elemen1, elemen2;
    int asterisk = 0, sharp = 0;

    scanf(" %[^\n]%*c", &input1);
    scanf(" %[^\n]%*c", &input2);
    printf("\n");

    elemen1 = strlen(input1);
    elemen2 = strlen(input2);

    if (elemen1 != elemen2) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else {
        for (int i = 0; i < elemen1; i++) {
            if (input1[i] == input2[i]) {
                if (input1[i] != ' ') {
                    printf("*");
                    asterisk++;
                } else {
                    printf(" ");
                }
            } else {
                    printf("#");
                    sharp++;
                }
            }
        printf("\n* = %d", asterisk);
        printf("\n# = %d", sharp);

        if (asterisk >= sharp) {
            printf("\nPesan Asli");
        } else {
            printf("\nPesan Palsu");
        }
        }
    return 0;
}