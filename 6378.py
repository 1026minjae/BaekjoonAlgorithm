cases = []

def digital_root(n) :
    r = 0
    for i in n :
        r += int(i)
    if r < 10 : 
        return r
    else :
        return digital_root(str(r))

while True : 
    i = input()
    if i == "0" : break
    cases.append(i)

for case in cases :
    print(digital_root(case))
