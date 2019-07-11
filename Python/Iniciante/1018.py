val = int(input())

print("%d" %(val))
x = int(val/100)
print("%d nota(s) de R$ 100,00" %(x))
val -= 100*x
x = int(val/50)
print("%d nota(s) de R$ 50,00" %(x))
val -= 50*x
x = int(val/20)
print("%d nota(s) de R$ 20,00" %(x))
val -= 20*x
x = int(val/10)
print("%d nota(s) de R$ 10,00" %(x))
val -= 10*x
x = int(val/5)
print("%d nota(s) de R$ 5,00" %(x))
val -= 5*x
x = int(val/2)
print("%d nota(s) de R$ 2,00" %(x))
val -= 2*x
print("%d nota(s) de R$ 1,00" %(val))