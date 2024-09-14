n = int(input("N: "))
i = 0
num = 1
while i < n:
    j = 0
    while j < n:
        print(num, end=" ")
        j += 1
        num += 1
    print()
    i += 1
