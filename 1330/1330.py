a = input()

for i in range(len(a)):
    if a[i] == " ":
        num1 = int(a[0:i])
        num2 = int(a[i:len(a)])
        break

if num1 > num2:
    print(">")
elif num1 < num2:
    print("<")
else:
    print("==")