print("Input")
r = float (input())
t = float (input())

phi = 22/7
Luas_alas_bejana = phi*r*r
Keliling = 2*phi*r
Volume = phi*r*r*t
Luas = (2*Luas_alas_bejana) + (Keliling*t)

print("\n Output")
print(f"Volume = {Volume:.2f}")
print(f"Luas = {Luas:.2f}")
print(f"Keliling = {Keliling:.2f}")