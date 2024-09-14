n = int(input("N: "))
i = 0
while i < n:
    x = 65 + i
    j = 0
    while j < n:
        print(chr(x), end=" ")
        j += 1
    print()
    i += 1

