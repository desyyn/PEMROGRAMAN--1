print("Input")
input_detik = int(input())
hari = input_detik // (3600*24)
sisa_hari = input_detik % (3600*24)
jam = sisa_hari // 3600
sisa_jam = sisa_hari % 3600
detik = sisa_jam % 60
menit = sisa_jam // 60

print("Output")
if (input_detik < 60):
    print(f"00:00:{detik:02}")
elif (input_detik > 60) and (input_detik < 3600): 
    print(f"00:{menit:02}:{detik:02}")
elif (input_detik >= 3600) and  (input_detik < 86400):
    print(f"{jam:02}:{menit:02}:{detik:02}")
else: 
    print(f"{hari:01} hari {jam:02}:{menit:02}:{detik:02}")