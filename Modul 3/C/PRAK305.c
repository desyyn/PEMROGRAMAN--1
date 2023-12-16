#include <stdio.h.>

int main (){
    int input_detik;
    printf("Input\n");
    scanf("%d", &input_detik);
    printf("Output\n");

    int hari = input_detik / (3600*24);
    int sisa_hari = input_detik % (3600*24);
    int jam = sisa_hari / 3600;
    int sisa_jam = input_detik % 3600;
    int detik = sisa_jam % 60;
    int menit = sisa_jam / 60;

    if (input_detik < 60) {
        printf("00:00:%02d", detik);
    } else if (input_detik > 60 && input_detik < 3600) {
        printf("00:%02d:%02d", menit, detik);
    } else if (input_detik >= 3600 && input_detik < 86400) {
        printf("%02d:%02d:%02d", jam, menit, detik);
    } else if (input_detik > 86400) {
        printf("%d hari ", hari);
        printf("%02d:%02d:%02d", jam, menit, detik);
    }
return 0;
}