눈들 = input()
두번째인가 = False

for i in range(len(눈들)):
    if 눈들[i] == " ":
        if 두번째인가:
            눈2 = int(눈들[두번째눈시작글자:i])
            눈3 = int(눈들[i+1:])
            break
        else:
            눈1 = int(눈들[0:i])
            두번째눈시작글자 = i + 1
            두번째인가 = True

if 눈1 == 눈2 == 눈3:
    print(int(10000 + 눈1 * 1000))
elif 눈1 == 눈2:
    print(int(1000 + 눈1 * 100))
elif 눈2 == 눈3:
    print(int(1000 + 눈2 * 100))
elif 눈1 == 눈3:
    print(int(1000 + 눈1 * 100))
elif 눈1 > 눈2 and 눈1 > 눈3:
    print(int(100 * 눈1))
elif 눈2 > 눈1 and 눈2 > 눈3:
    print(int(100 * 눈2))
else:
    print(int(100 * 눈3))