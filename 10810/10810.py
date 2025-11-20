번호어디까지, 공몇번넣을거야 = map(int, input().split())
바구니 = [0] * 번호어디까지

for _ in range(공몇번넣을거야):
    시작바구니, 끝바구니, 공번호 = map(int, input().split())
    for i in range(시작바구니 - 1, 끝바구니):
        바구니[i] = 공번호

for i in range(len(바구니)):
    if i == len(바구니):
        print(바구니[i])
    else:
        print(바구니[i], end=" ")