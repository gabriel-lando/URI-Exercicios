line = input().split(" ")

x, y = line

a = int(x)
b = int(y)

if (a >= b and a%b == 0) or (b > a and b%a == 0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
