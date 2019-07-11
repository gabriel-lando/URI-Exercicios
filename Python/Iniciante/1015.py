import math
l1 = input().split(" ")
l2 = input().split(" ")
a1, b1 = l1
a2, b2 = l2

x1 = float(a1)
y1 = float(b1)
x2 = float(a2)
y2 = float(b2)

dist = math.sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1))

print("%.4f" %(dist))