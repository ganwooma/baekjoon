값 = int(input())
종류 = int(input())
총합값 = 0
for i in range(종류):
    값개수 = input()
    for j in range(len(값개수)):
        if 값개수[j] == " ":
            물건값 = int(값개수[0:j])
            물건개수 = int(값개수[j+1:])
            총합값 += int(값개수[0:j]) * int(값개수[j+1:])
            break
if 값 == 총합값:
    print("Yes")
else:
    print("No")