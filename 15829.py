L  = int(input())
s = input()

tot = 0

for i in range(len(s)):
    tot = tot + (ord(s[i]) - 96) * (31 ** i)

print(tot % 1234567891)