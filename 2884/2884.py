hour, minute = map(int, input().split())
minute += hour * 60
minute -= 45
if minute <= 0:
    minute += 24 * 60
hour = minute // 60
if hour >= 24:
    hour = hour - 24
minute = minute % 60
print(f"{hour} {minute}")