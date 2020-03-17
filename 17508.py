class CannotMake(Exception) : 
    pass

hw = input()
h_w = hw.split(" ")
height = int(h_w[0])
width = int(h_w[1])

cards = []
cnt = 0

for _ in range(height) :
    cards.append(input())

try : 
    if height % 2 and width % 2 :
        if cards[int((height-1)/2)][int((width-1)/2)] != "8" :
            raise CannotMake
    for y in range(height) :
        for x in range(width) :
            if cards[y][x] == "6" :
                if cards[height-1-y][width-1-x] == "6" :
                    cnt += 1
                elif cards[height-1-y][width-1-x] == "9" :
                    pass
                else :
                    raise CannotMake
            elif cards[y][x] == "7" :
                if cards[height-1-y][width-1-x] == "7" :
                    cnt += 1
                else :
                    raise CannotMake
            elif cards[y][x] == "8" :
                if cards[height-1-y][width-1-x] != "8" :
                    raise CannotMake
            else : #cards[y][x] == "9"
                if cards[height-1-y][width-1-x] == "9" :
                    cnt += 1
                elif cards[height-1-y][width-1-x] == "6" :
                    pass
                else :
                    raise CannotMake
    print(int(cnt/2))
except CannotMake :
    print(-1)