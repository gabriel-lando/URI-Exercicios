line  = input().split(" ")

x, y, z = line

a = float(x)
b = float(y)
c = float(z)

if a >= b and a >= c and a < (b + c):
    print("Perimetro = %.1f" %(a+b+c))
elif b >= a and b >= c and b < (a + c):
    print("Perimetro = %.1f" %(a+b+c))
elif c >= a and c >= b and c < (a + b):
    print("Perimetro = %.1f" %(a+b+c))
else:
    print("Area = %.1f" %((a+b)*c/2))
