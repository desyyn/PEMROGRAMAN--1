print("Input")
angka = input().split()
A, B =  map(int, angka)
Tinggi = A
Alas = ((B*B) - (A*A))**0.5 
Keliling = A + Alas + B
Luas = Alas*A/2
print("\nOutput")
print(f"Alas = {Alas:.0f}")
print(f"Tinggi = {Tinggi:.0f}")
print(f"Keliling = {Keliling:.0f}")
print(f"Luas = {Luas:.0f} cm^2")