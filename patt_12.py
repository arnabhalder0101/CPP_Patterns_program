n = int(input("N: "))
i = 0

while i < n:
    j = 0
    while j < n:
        print(chr(65 + j), end=" ")
        j += 1
    print()
    i += 1
