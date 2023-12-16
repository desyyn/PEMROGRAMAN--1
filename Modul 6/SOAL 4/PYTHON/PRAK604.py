input1 = input()
input2 = input()

elemen1 = len(input1)
elemen2 = len(input2)

asterisk = 0
sharp = 0

print()

if (elemen1 != elemen2):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range (elemen1):
        if (input1[i] == input2[i]):
            if (input1[i] != ' '):
                print("*", end='')
                asterisk += 1
            else:
                print(" ", end='')
        else:
            print("#", end='')
            sharp += 1
            
    print("\n* =", asterisk)
    print("# =", sharp)

    if (asterisk >= sharp):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")