기물 = list(map(int, input().split()))
기물총량 = [1, 1, 2, 2, 2, 8]

for i in range(6):
    if 기물[i] == 기물총량[i]:
        머필요 = 0
    else:
        머필요 = 기물총량[i] - 기물[i]
        if str(머필요) == "-":
            머필요 = int(str(머필요)[1:])
    print(str(머필요), end = " ")