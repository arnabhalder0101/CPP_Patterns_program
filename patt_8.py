n = int(input("N: "))
i = 0
x = 1
num = 1
while i < n:
    j = x
    while j > 0:
        print(num, end=" ")
        j -= 1
        num += 1
    print()
    i += 1
    x += 1
