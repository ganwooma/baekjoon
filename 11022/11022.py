T = int(input())
c = [0] * T

for i in range(T):
    a, b = map(int, input().split())
    c[i] = "Case #" + str(i + 1) + ": " + str(a) + " + " + str(b) + " = " + str(a + b)

for i in range(T):
    print(str(c[i]))