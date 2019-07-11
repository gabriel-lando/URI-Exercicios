a = float(input())

x = int(a*100)

n = int(x/10000)
print("NOTAS:\n%d nota(s) de R$ 100.00" %(n))
x %= 10000
n = int(x/5000)
print("%d nota(s) de R$ 50.00" %(n))
x %= 5000
n = int(x/2000)
print("%d nota(s) de R$ 20.00" %(n))
x %= 2000
n = int(x/1000)
print("%d nota(s) de R$ 10.00" %(n))
x %= 1000
n = int(x/500)
print("%d nota(s) de R$ 5.00" %(n))
x %= 500
n = int(x/200)
print("%d nota(s) de R$ 2.00" %(n))
x %= 200
n = int(x/100)
print("MOEDAS:\n%d moeda(s) de R$ 1.00" %(n))
x %= 100
n = int(x/50)
print("%d moeda(s) de R$ 0.50" %(n))
x %= 50
n = int(x/25)
print("%d moeda(s) de R$ 0.25" %(n))
x %= 25
n = int(x/10)
print("%d moeda(s) de R$ 0.10" %(n))
x %= 10
n = int(x/5)
print("%d moeda(s) de R$ 0.05" %(n))
x %= 5
print("%d moeda(s) de R$ 0.01" %(x))