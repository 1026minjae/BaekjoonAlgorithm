cases = []
inp = ""
while True :
    inp = input()
    if inp == '-1' : 
        break
    case = inp.split(" ") 
    cases.append(case)

for case in cases :
    cnt = 0
    for i in range(len(case)-2) :
        c = i+1
        while c < len(case) : 
            if int(case[i]) * 2 == int(case[c]) or int(case[i]) / 2 == int(case[c]) :
                cnt += 1
            c+=1
    print(cnt)