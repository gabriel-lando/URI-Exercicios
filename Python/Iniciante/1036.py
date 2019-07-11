import math

x = input().split(" ")

a1, b2, c3 = x

a = float(a1)
b = float(b2)
c = float(c3)

delta = b*b - 4 * a * c

if delta < 0 or a == 0:
	print("Impossivel calcular")
else:
	r1 = (-b + math.sqrt(delta))/(2*a)
	r2 = (-b - math.sqrt(delta))/(2*a)
	print("R1 = %.5f\nR2 = %.5f" %(r1, r2))