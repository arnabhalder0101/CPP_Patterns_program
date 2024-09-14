n = int(input("N: "))
i = 0
x = 1
while i < n:
    j = x
    num = x
    while j > 0:
        print(num, end=" ")
        j -= 1
        num -= 1
    print()
    x += 1
    i += 1
