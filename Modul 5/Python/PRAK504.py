def reverse(bilangan):
    reverse = 0
    sisa = 0
    while (bilangan != 0):
        sisa = bilangan % 10;
        reverse = reverse * 10;
        reverse = reverse + sisa;
        bilangan = bilangan // 10;
    return reverse;

angka = input().split()
A, B = map(int,angka)
A_reverse = reverse(A)
B_reverse = reverse(B)
C = A_reverse + B_reverse
print(reverse(C))