비교할수 = 0
for i in range(9):
    받은수 = int(input())
    if 받은수 > 비교할수:
        비교할수 = 받은수
        몇번째수 = i + 1
print(비교할수)
print(몇번째수)