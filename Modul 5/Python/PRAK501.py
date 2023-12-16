def MaxBilangan(a, b, c, d):
    return max(a, b, c, d)

angka = input().split()
a, b, c, d = map(int, angka)
hasil = MaxBilangan(a, b, c, d)
print(hasil)