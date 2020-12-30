X = int(input())

cnt = 0
while(X > (cnt+1)*(cnt+2)//2):
    cnt += 1

i = X - cnt*(cnt+1)//2 - 1
if(cnt%2 == 1) :
    bj = 1+i
    bm = cnt+1-i
else :
    bm = 1+i
    bj = cnt+1-i
    
print("%d/%d" % (bj,bm))
