while (True):
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = input("Masukkan Pilihan : ")
    if pilihan == '5':
        print("Terimakasih, telah menggunakan kalkulator Dessy Nurulita\n")
        break
    elif pilihan not in ['1', '2', '3', '4']:
        print("Input anda salah, silahkan coba lagi\n")
        continue
    else: 
        nilai1 = float(input("Masukkan nilai pertama : "))
        nilai2 = float(input("Masukkan nilai kedua : "))
        if pilihan == '1':
          hasil = nilai1 + nilai2
          print(f"Hasil penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == '2':
           hasil = nilai1 - nilai2
           print(f"Hasil pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == '3':
            hasil = nilai1 * nilai2
            print(f"Hasil perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}\n")
        elif pilihan == '4':
            hasil = nilai1 // nilai2
            print(f"Hasil pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}\n")