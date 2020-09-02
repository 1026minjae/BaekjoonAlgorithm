T = int(input())
cases = []
for _ in range(T):
    inp = list()
    inp.append(input().rstrip().split(" "))
    n = int(input())
    inp2 = list()
    for _ in range(n):
        inp2.append(input().rstrip().split(" "))
    inp.append(inp2)
    cases.append(inp)

def is_in(x, y, cx, cy, r):
    if (x-cx)**2 + (y-cy)**2 < r**2: 
        return True
    else:
        return False

for case in cases:
    x1, y1, x2, y2 = int(case[0][0]), int(case[0][1]), int(case[0][2]), int(case[0][3])
    cnt = 0
    for c in case[1]:
        if is_in(x1, y1, int(c[0]), int(c[1]), int(c[2])) ^ is_in(x2, y2, int(c[0]), int(c[1]), int(c[2])):
            cnt += 1
    print(cnt)