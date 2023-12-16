print("Input")
angka= input().split() 
angka1, angka2 = map(int, angka)
x = int(angka1)
y = int(angka2)
print("Output")
if angka1 < angka2:
    for i in range(int(angka1), int(angka2)+1):
        print(x, end=' ')
        print(y, end=' ')
        x += 1
        y -= 1
        if y == int(angka1) - 1:
            break
        else:
            print("-", end=' ')
else:
    for i in range(int(angka2), int(angka1)+1):
        print(x, end=' ')
        print(y, end=' ')
        x -= 1
        y += 1
        if x == int(angka2) - 1:
            break
        else:
            print("-", end=' ')