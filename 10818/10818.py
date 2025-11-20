input()
숫자들 = list(map(int, input().split()))
최소값 = 1000001
최댓값 = -1000001

for i in range(len(숫자들)):
    if 최소값 > 숫자들[i]:
        최소값 = 숫자들[i]
    if 최댓값 < 숫자들[i]:
        최댓값 = 숫자들[i]
print(f"{최소값} {최댓값}")