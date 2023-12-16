#Case 1
print("Input")
angka = input().split()
a, b, i, j, x, y =  map(float, angka)
hasil =  (a-b)*i/j-(x+y)
print("Output")
print(f"{hasil:.3f}")

#Case 2
print("\nInput")
angka = input().split()
a, b = map(float, angka)
angka = input().split()
i, j = map(float, angka)
angka = input().split()
x, y = map(float, angka)
hasil =  (a-b)*i/j-(x+y)
print("Output")
print(f"{hasil:.3f}")