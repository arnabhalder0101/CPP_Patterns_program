n = int(input("N: "))
i = 0
a = 0
while i < n:
    j = 0
    while j < n:
        print(chr(65 + a), end=" ")
        j += 1
        a += 1
    print()
    i += 1
