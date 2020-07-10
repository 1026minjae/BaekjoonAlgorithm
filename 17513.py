queries = []
rooms = []
G=1

for _ in range(10**9): rooms.append(0)

Q = int(input())
for _ in range(Q):
    queries.append(input().split(" "))

for query in queries:
    q = int(query[1])
    if query[0] == "1":
        if q == 0:
            for i in range(5*(10**8)):
                rooms.insert(2*i+1,G)
        else:
            for _ in range(q):
                rooms.insert(0,G)
        G+=1
    elif query[0] == "2":
        for i in range(len(rooms)):
            if rooms[i] == q:
                print(i)
                break
    else: #query[0] == "3"
        if q+1 > len(rooms):
            print(0)
        else: 
            print(rooms[q])

print(queries)