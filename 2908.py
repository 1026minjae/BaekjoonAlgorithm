raw = input().split(" ")
f = int(raw[0][::-1])
s = int(raw[1][::-1])

if f > s:
    print(f)
else:
    print(s)