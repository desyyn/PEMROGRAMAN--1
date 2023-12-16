def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    print(f"Perkenalkan Nama Saya : {Namaku}")
    print(f"Umur Saya : {tahun_sekarang - tahunLahir}")
    print(f"Saya adalah angkatan : {tahun_sekarang}")
    print(f"Asal saya dari : {Asal}")

tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)