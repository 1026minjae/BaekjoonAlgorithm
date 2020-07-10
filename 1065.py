import math

N=input()

if len(N) < 3:
    print(N)
elif len(N) == 4:
    print(144)
else:
    b, s, i = int(N[-3]), int(N[-2]), int(N[-1])
    cnt=99+(b-1)*5
    if s < b/2:
        pass
    elif s <= (b+9)/2:
        cnt+=s-1-math.ceil(b/2-1)
        if i >= 2*s-b: cnt+=1
    else:
        cnt+=5
    print(cnt)