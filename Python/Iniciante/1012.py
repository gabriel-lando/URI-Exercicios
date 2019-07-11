linha = input().split(" ")
a, b, c = linha

tri = float(a) * float(c) / 2
circ = 3.14159 * float(c) * float(c)
trap = (float(a) + float(b)) * float(c) / 2
quad = float(b) * float(b)
ret = float(a) * float(b)

print("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f" % (tri, circ, trap, quad, ret))
