def tot(n, s) : 
    t = 0
    while n > 0 :
        t += n%s
        n = n // s
    return t

for i in range(1000,10000) :
    t10 = tot(i, 10)
    t12 = tot(i, 12)
    t16 = tot(i, 16)
    if t10 == t12 and t12 == t16 : 
        print(i)