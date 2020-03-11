T = int(input())
cases = []
for _ in range(T) :
    cases.append(int(input()))

for case in cases :
    limit = 1
    cnt0 = 0
    
    while True :
        if 5**limit > case : break
        else : limit += 1

    for l in range(limit) :
        cnt0 += case // 5**(l+1)

    print(cnt0)