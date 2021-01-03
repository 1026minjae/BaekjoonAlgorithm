T=int(input())

ans_list = []

for _ in range(T):
    raw = input().split(" ")
    R = int(raw[0])
    P = ""
    for ch in raw[1]:
        P = P + ch*R
    ans_list.append(P)

for ans in ans_list:
    print(ans)