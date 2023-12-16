def maksimal(a, b):
    if a > b:
        result = a
    else:
        result = b
    return result
    
def minimal(a, b):
    if a < b:
        result = a
    else:
        result = b
    return result
    
batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
while(batas < bilangan):
    num = input().split()
    num = map(int,num)
    for nilai in num:
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        batas += 1
print(maks, minim)