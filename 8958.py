T = int(input())
ans_list = []

for _ in range(T):
    s = input()
    cnt = 0
    sc = 0

    for c in s:
        if c == "O":
            cnt += 1
            sc += cnt
        if c == "X":
            cnt = 0
    ans_list.append(sc)

for i in range(T):
    print(ans_list[i])