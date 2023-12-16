#include <stdio.h>
#include <string.h>

int main()
{
char Nama [30]; char NIM [30]; char Kelas_Paralel [30]; char Tempat_Tanggal_Lahir [50]; char Alamat [100]; char Hobby [30]; char NoHP [30];
    printf("Input\n");
    printf("Input Nama              :");
    fgets(Nama, 30, stdin);
    printf("NIM                     :");
    fgets(NIM, 30, stdin);
    printf("Kelas Paralel           :");
    fgets(Kelas_Paralel, 30, stdin);
    printf("Tempat/Tanggal Lahir    :");
    fgets(Tempat_Tanggal_Lahir, 50, stdin);
    printf("Alamat                  :");
    fgets(Alamat, 100, stdin);
    printf("Hobby                   :");
    fgets(Hobby, 30, stdin);
    printf("NO.Hp                   :");
    fgets(NoHP, 30, stdin);

    printf("Output\n");
    printf("Input Nama              :%s", Nama);
    printf("NIM                     :%s", NIM);
    printf("Kelas Paralel           :%s", Kelas_Paralel);
    printf("Tempat/Tanggal Lahir    :%s", Tempat_Tanggal_Lahir);
    printf("Alamat                  :%s", Alamat);
    printf("Hobby                   :%s", Hobby);
    printf("NO.HP                   :%s", NoHP);
    return 0;
}