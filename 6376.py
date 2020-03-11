def fac(n) :
    if n < 2 : return 1
    else : return n * fac(n-1)

e = 0

print("n e")
print("- -----------")

for i in range(10) :
    e += 1 / fac(i)
    if i < 2 :
        print(i, int(e))
    elif i < 3: 
        print(i, e)
    else : 
        print(i, format(e, ".9f"))