bg_min = 2000
bv_min = 2000
for _ in range(3):
    p = int(input())
    if p < bg_min: bg_min = p
for _ in range(2):
    p = int(input())
    if p < bv_min: bv_min = p

print(bg_min+bv_min-50)