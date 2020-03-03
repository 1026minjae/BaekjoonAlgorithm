ori = int(input())
cnt = 0
temp = ori
while True :
    hap = temp//10 + temp%10
    new = (temp%10)*10 + hap%10
    cnt += 1

    if ori == new :
        print(cnt)
        break

    temp = new
