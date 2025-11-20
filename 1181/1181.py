문자열들 = []

for i in range(int(input())):
    문자열들.append(input())

문자열들 = list(set(문자열들))

문자열들.sort(key=lambda x: (len(x), x))

for i in 문자열들:
    print(i)