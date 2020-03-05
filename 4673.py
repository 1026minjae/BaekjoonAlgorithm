def d(n) :
    tot = n
    while n > 0 : 
        tot += n%10
        n = n // 10
    return tot

li = [0 for _ in range(10001)]
li[0] = 1

for i in range(10001) : 
    if not i : continue
    temp = d(i)
    if temp < 10001 : li[temp] += 1

for i in range(10001) :
    if not li[i] : print(i)