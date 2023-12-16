ordo = int(input())

matriks_A = []
matriks_B = []

print("Matriks A")
for baris in range(ordo):
    elemen1 = list(map(int, input().split()))
    matriks_A.append(elemen1)

print("Matriks B")
for baris in range(ordo):
    elemen2 = list(map(int, input().split()))
    matriks_B.append(elemen2)

print("Matriks AxB")
for baris in range(ordo):
    for kolom in range(ordo):
        hasil = 0
        for x in range(ordo):
            hasil = hasil + matriks_A[baris][x] * matriks_B[x][kolom]
        print(hasil, end=" ")
    print()