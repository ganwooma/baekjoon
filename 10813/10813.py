바구니개수, 줄개수 = map(int, input().split())

바구니 = [0] * 바구니개수
for i in range(바구니개수):
    바구니[i] = i + 1

for _ in range(줄개수):
    교환할거1, 교환할거2 = map(int, input().split())
    임시저장 = 바구니[교환할거1 - 1]
    바구니[교환할거1 - 1] = 바구니[교환할거2 - 1]
    바구니[교환할거2 - 1] = 임시저장
    
for i in range(바구니개수):
    if i != 바구니개수:
        print(바구니[i], end=" ")
    else:
        print(바구니[i])