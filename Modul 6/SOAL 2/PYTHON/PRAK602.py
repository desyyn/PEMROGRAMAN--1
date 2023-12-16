nilai = int(input()) #nilai sebagai jumlah ruangan
elemen = list(map(int, input().split()))

banyak_zetsu = elemen

print()

for i in range (nilai):
    total = banyak_zetsu[i] * (1+i)
    print(total, end = " ")