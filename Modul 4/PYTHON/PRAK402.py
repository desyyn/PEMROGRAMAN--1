print("Input")
bilangan = int(input())
print("Output")

for i in range(1, bilangan+1): 
#bilangan+1 digunakan sebagai rentang. 
# jadi akan melakukkan looping dari 1 hingga bilangan itu sendiri.
        if (i % 2 != 0):
            print(i, end=" ")
print()
for i in range(bilangan, 1, -1):
        if (i % 2 == 0):
            print(i, end=" ")