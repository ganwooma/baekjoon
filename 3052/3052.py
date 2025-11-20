숫자 = []
몇개 = 10
이거는아니야 = []

for i in range(10):
    숫자.append(int(input()))

for i in range(10):
    숫자[i] = 숫자[i] % 42

for i in range(10):
    for j in range(10):
        if i != j and 숫자[i] == 숫자[j]:
            몇개 -= 1
            if 숫자[i] not in 이거는아니야:
                이거는아니야.append(숫자[i])
            break

print(몇개 + len(이거는아니야))