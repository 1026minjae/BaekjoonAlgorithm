cases = []

def lotto(pre_li, li) : 
    for i in range(len(li)) :
        print(li[i], end="") 
        if len(pre_li) == 5 : 
            print("")
        else :
            print(" ", end="")
            new_pre_li = pre_li[:] #Here is where I got bug. new_pre_li = pre_li[] means two have same address but different val_name
            new_pre_li.append(li[i])
            lotto(new_pre_li, li[(i+1):])

        if not i == len(li) + len(pre_li) - 6  : 
            if len(pre_li) :
                print(" ".join(pre_li), end=" ")
        else :
            break       

while True :
    line = input()
    if line == '0' : break
    else :
        fixed = line.split() 
        cases.append(fixed[1:])

for i in range(len(cases)) :
    lotto([],cases[i])
    print("")

