a = input()
b = 0
c = 0
for i in range(len(a)):
    if b != 2:
        if a[i] == " ":
            b += 1
            if b == 1:
                e = a[0:i]
                d = i
            elif b == 2:
                f = a[d:i]
                d = i
    else:
        print(int(e) + int(f) + int(a[d:len(a)]))
        break