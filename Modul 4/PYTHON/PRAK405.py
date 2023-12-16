print("Input")
angka1, angka2 = input().split()
angka1 = int(angka1)
angka2 = int(angka2)
print("Output")
for i in range(1, angka1 + 1):
    a = i 
    while a > 1 : 
        print("(%d * %d) + " %(a, angka2), end='') 
        a -= 1 
    b = 1 
    hasil = (i*angka2)
    while b < i:
        hasil += (b * angka2) 
        b += 1
    print("(%d * %d) = %d" %(a, angka2, hasil))

x = 1
y = 1
total = 0
while x <= angka1:
    total += y * angka2 
    y += x + 1
    x += 1
print("%d" %(total))