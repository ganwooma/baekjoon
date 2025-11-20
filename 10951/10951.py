import sys

출력 = []

for line in sys.stdin:
    a, b = map(int, line.split())
    출력.append(a + b)
for i in range(len(출력)):
    print(str(출력[i]))