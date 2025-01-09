n, m = map(int, input().split())
for i in range(n, m + 1):
    k = str(i)
    if ('3' in k or '6' in k or '9' in k):
        for j in range(k.count('3') + k.count('6') + k.count('9')):
            print('K', end='')
        print()
    else:
        print(k)