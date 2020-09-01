N=int(input())
cases = []
for _ in range(N): cases.append(input().split(" "))

for case in cases:
    x1, y1, r1, x2, y2, r2 = int(case[0]), int(case[1]), int(case[2]), int(case[3]), int(case[4]), int(case[5])
    d = ((x2-x1)**2 + (y2-y1)**2)**0.5
    if d == 0 and r1 == r2: print(-1)
    elif d < (r1+r2) and r1 < (d+r2) and r2 < (r1+d) : print(2)
    elif d == (r1+r2) or abs(r1-r2) == d: print(1)
    else: print(0)