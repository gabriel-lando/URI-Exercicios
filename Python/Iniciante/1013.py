linha = input().split(" ")
a1, a2, a3 = linha
a = int(a1)
b = int(a2)
c = int(a3)

maiorAB = (a + b + abs(a - b)) / 2

maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2

print("%d eh o maior" %(maiorABC))