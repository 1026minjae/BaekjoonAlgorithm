T = int(input())
cases = []

for _ in range(T) :
    cases.append(int(input()))

for case in cases :
    bcase = str(bin(case))
    for i in range(2,len(bcase)) :
        if bcase[len(bcase)+1-i] == '1' :
            print(i-2, end=" ")
    print("")