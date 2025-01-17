n = input()
lst = []
for i in range(int(n)):
    x = input()
    lst.append(x)

count = 0
for c in lst:
    count += c.count('62')
    print(count)
    count = 0


