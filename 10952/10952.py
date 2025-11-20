i = 0
출력 = []
while (True):
    i += 1
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    else:
        출력.append(a + b)

for i in range(len(출력)):
    print(출력[i])