baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))

matriks = []

for i in range(baris):
    baris_matriks = []
    for j in range(kolom):
        baris_matriks.append(elemen[i * kolom + j])
    matriks.append(baris_matriks)

print()

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()