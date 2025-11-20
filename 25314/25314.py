받을바이트 = int(input())
for i in range(받을바이트):
    출력할바이트 = 받을바이트 // 4
    if 받을바이트 % 4 > 0:
        출력할바이트 += 1
print("long " * 출력할바이트 + "int")