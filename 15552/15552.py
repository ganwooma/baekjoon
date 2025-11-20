import sys
몇번반복 = int(sys.stdin.readline())
for i in range(몇번반복):
    a, b = map(int, sys.stdin.readline().split())
    print(str(a + b))