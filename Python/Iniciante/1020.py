dia = int(input())

ano = int(dia/365)
dia %= 365
mes = int(dia/30)
dia %= 30

print("%d ano(s)\n%d mes(es)\n%d dia(s)" %(ano, mes, dia))