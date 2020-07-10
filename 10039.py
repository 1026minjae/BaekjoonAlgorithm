scores = []
tot = 0
for _ in range(5): scores.append(int(input()))

for i in range(5):
    if scores[i] < 40:
        scores[i]=40
    tot += scores[i]

print(int(tot/5))