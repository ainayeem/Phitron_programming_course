st = input()
cnt1 = 0
cnt2 = 0
result = []
eChar = ""

for c in st:
    eChar += c

    if c == 'L':
        cnt1 += 1
    else:
        cnt2 += 1
    if cnt1 == cnt2:
        result.append(eChar)
        eChar = ""

print(len(result))
for word in result:
    print(word)
