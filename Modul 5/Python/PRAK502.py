def hitung(nilai1, nilai2):
    hasil_hitung = nilai1 - nilai2 
    if (hasil_hitung < 0):
        result = -hasil_hitung
    else:
        result = hasil_hitung
    return result

def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka

angka = input().split()
a, c, b, d = map(int,angka)
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))