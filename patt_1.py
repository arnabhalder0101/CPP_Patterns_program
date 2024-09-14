n = int(input("N: "))
n_ = n

while n > 0:
    n1 = n_
    while n1 > 0:
        print(" * ", end="")
        n1 -= 1
    print()
    n -= 1
