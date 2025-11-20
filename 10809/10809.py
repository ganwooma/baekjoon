알파벳 = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
문자열 = input()
이숫자어디 = -1

for i in range(len(알파벳)):
    for j in range(len(문자열)):
        if 알파벳[i] == 문자열[j]:
            이숫자어디 = j
            break

    if i == len(알파벳):
        print(이숫자어디)
    else:
        print(이숫자어디, end=" ")

    이숫자어디 = -1