seg = int(input())

hr = int(seg/3600)
seg -= 3600*hr
mi = int(seg/60)
seg -= mi*60

print("%d:%d:%d" %(hr, mi, seg))