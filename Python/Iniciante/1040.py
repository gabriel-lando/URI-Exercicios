x = input().split(" ")
a, b, c, d = x

n1 = float(a)
n2 = float(b)
n3 = float(c)
n4 = float(d)

media = (2*n1 + 3*n2 + 4*n3 + n4)/10

print("Media: %.1f" %(media))

if media >= 7:
    print("Aluno aprovado.")
elif media >= 5:
    print("Aluno em exame.")
    exame = float(input())
    media = (media + exame)/2
    print("Nota do exame: %.1f" %(exame))
    if media >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %.1f" %(media))
else:
    print("Aluno reprovado.")
