print("Input")
angka = input().split()
angka_pertama, angka_kedua = map(int, angka)
print("Output")
if (angka_pertama < angka_kedua):
    print(angka_pertama, angka_kedua)
else:
    print(angka_kedua, angka_pertama)