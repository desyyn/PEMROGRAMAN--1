nilai1, nilai2 = map(int, input().split())

if (nilai1 == nilai2):
    elemen1 = list(map(int, input().split()))
    elemen2 = list(map(int, input().split()))
    baris1 = elemen1
    baris2 = elemen2
    for i in range(nilai1):
        baris1.append(elemen1)
    for i in range(nilai2):
        baris2.append(elemen2)
    print() 
    for i in range(nilai1):
        hasil = baris1[i] * baris2[i]
        print(hasil, end = " ")
else:
    print("\nJumlah tidak sama")