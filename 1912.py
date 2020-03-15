n = int(input())
inp = input()
cases = inp.split(" ")
indexs = range(n)
max_sum = 0

for i in indexs :
    cases[i] = int(cases[i])

for i in indexs :
    if not i : 
        max_sum = cases[i]
        continue 
    if cases[i] < cases[i] + cases[i-1] :
        cases[i] = cases[i] + cases[i-1]
    if max_sum < cases[i] :
        max_sum = cases[i]

print(max_sum)