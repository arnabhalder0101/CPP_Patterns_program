n = int(input("N: "))
i = 0
x = 1
while i < n:
    j = x
    while j > 0:
        print(" * ", end=" ")
        j -= 1
    print()
    x += 1
    i += 1
