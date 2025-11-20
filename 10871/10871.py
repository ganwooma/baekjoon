숫자몇개, 이거보다작아야됨 = map(int, input().split())
수열 = list(map(int, input().split()))

for i in range(숫자몇개):
    if 수열[i] < 이거보다작아야됨:
        print(str(수열[i]), end=" ")