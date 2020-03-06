sang = input()
news = input()
sangs = sang.split(" ")
data = news.split(" ")

sang_inwon = int(sangs[0]) * int(sangs[1])

for i in data :
    print(int(i)-sang_inwon, end=" ")