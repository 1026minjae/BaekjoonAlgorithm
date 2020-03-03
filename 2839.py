N = int(input())

cnt_5 = N // 5
cnt_3 = 0

while True : 
    if (N - 5 * cnt_5) % 3 == 0 :
        cnt_3 = (N - 5 * cnt_5) // 3
        break
    elif N - 5 * cnt_5 > 40 : 
        cnt_3 = cnt_5 * -1 - 1
        break
    elif cnt_5 == 0 : 
        cnt_3 = -1
        break
    cnt_5 -= 1

print(cnt_5 + cnt_3)