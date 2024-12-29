# def hanoi(n, a, b, c):
#     if n == 1:
#         print(f"Disk 1 : {a} to {c}")
#     else:
#         hanoi(n-1, a, c, b)
#         print(f"Disk {n} : {a} to {c}")
#         hanoi(n-1, b, a, c)


n = int(input())
print((1 << n) - 1)
# hanoi(n, 'A', 'B', 'C')