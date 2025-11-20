몇개 = int(input())
수나열 = list(map(int, input().split()))
정수 = int(input())
같은거개수 = 0
for i in range(몇개):
    if 수나열[i] == 정수:
        같은거개수 += 1
print(str(같은거개수))