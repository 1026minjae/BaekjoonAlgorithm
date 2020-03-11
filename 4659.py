import re

p1 = re.compile("[aeiou]")
p2 = re.compile("[aeiou]{3,}|[^aeiou]{3,}|a{2,}|b{2,}|c{2,}|d{2,}|e{3,}|f{2,}|g{2,}|h{2,}|i{2,}|j{2,}|k{2,}|l{2,}|m{2,}|n{2,}|o{3,}|p{2,}|q{2,}|r{2,}|s{2,}|t{2,}|u{2,}|v{2,}|w{2,}|x{2,}|y{2,}|z{2,}")

cases = []
while True :
    case = input()
    if case == "end" : break
    cases.append(case)

for case in cases :
    if p1.search(case) :
        if p2.search(case) :
            print("<"+case+"> is not acceptable.")
            continue
        else :
            print("<"+case+"> is acceptable.")
    else :
        print("<"+case+"> is not acceptable.")