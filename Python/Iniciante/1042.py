line = input().split(" ")

x, y, z = line

a = int(x)
b = int(y)
c = int(z)

if a < c:
    if a < b:
        print(a)
        if b < c:
            print("%d\n%d" %(b, c))
        else:
            print("%d\n%d" %(c, b))
    else:
        print("%d\n%d\n%d" %(b, a, c))
else:
    if b < c:
        print("%d\n%d\n%d" %(b, c, a))
    elif a < b:
        print("%d\n%d\n%d" %(c, a, b))
    else:
        print("%d\n%d\n%d" %(c, b, a))

print("\n%d\n%d\n%d" %(a, b, c))
