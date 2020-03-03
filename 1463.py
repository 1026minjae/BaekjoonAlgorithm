x = int(input())

cnt = [0 for _ in range(x+1)]

for i in range(x+1) :
    if not i : continue
    temp = cnt[i] + 1
    if i+1 <= x and (not cnt[i+1] or cnt[i+1] > temp) : cnt[i+1] = temp
    if i*2 <= x and (not cnt[i*2] or cnt[i*2] > temp) : cnt[i*2] = temp
    if i*3 <= x and (not cnt[i*3] or cnt[i*3] > temp) : cnt[i*3] = temp

print(cnt[x])
    