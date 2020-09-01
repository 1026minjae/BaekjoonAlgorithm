zero = [0 for _ in range(41)]
one = [0 for _ in range(41)]

for n in range(41):
    if n == 0: 
        zero[0] = 1
    elif n == 1:
        one[1] = 1
    else:
        zero[n] = zero[n-1] + zero[n-2]
        one[n] = one[n-1] + one[n-2]

T = int(input())
cases = []
for _ in range(T):
    cases.append(int(input()))

for case in cases:
    print(zero[case], one[case])