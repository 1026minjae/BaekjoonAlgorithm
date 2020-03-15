che = [0 for _ in range(1001)]
che[1] = 1
for n in range(2,1001) :
    if che[n] :
        continue
    else :
        for m in range(1, 1+1000//n) :
            if m > 1 :
                che[n*m] = 1

N = int(input())
inp = input()
cases = inp.split(" ")
cnt = 0
for case in cases :
    if not che[int(case)] :
        cnt += 1

print(cnt)