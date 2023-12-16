print("Input")
bilangan, simbol = input().split()
x = int(bilangan)
print("Output")
for i in range(1, 51):
  if (i % x == 0): 
    print(simbol, end=' ')
  else:
    print(i, end=' ')