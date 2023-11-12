s = input()
cur = s[0]
count = 1
max_count = 0

for i in range(1, len(s)):
    if s[i] == cur:
        count += 1
    else:
        cur = s[i]
        max_count = max(max_count, count)
        count = 1

max_count = max(max_count, count)
print(max_count)

