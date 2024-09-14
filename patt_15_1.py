n = int(input("N: "))
i = 0
a = 1
while i < n:
    j = 0
    while j < a:
        print(chr(65 + i), end=" ")
        j += 1
    print()
    i += 1
    a += 1
