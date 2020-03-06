n = int(input())
coms = []

for _ in range(n) :
    coms.append(input())

for com in coms :
    li = []
    for i in range(len(com)) :
        li.append(chr((ord(com[i]) - 65 + 1) % 26 + 65))
    print("String #"+str(coms.index(com)+1))
    print("".join(li), "\n")