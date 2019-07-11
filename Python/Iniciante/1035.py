line = input().split(" ")

a1, a2, a3, a4 = line
a = int(a1)
b = int(a2)
c = int(a3)
d = int(a4)

if (b > c) and (d > a) and ((c + d) > (a + b)):
	print("Valores aceitos")
else:
	print("Valores nao aceitos")