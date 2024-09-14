n = int(input("N: "))
i = 0
x = 1
while i < n:
    j = x
    num = x
    while j > 0:
        print(num, end=" ")
        j -= 1
        num += 1
    print()
    i += 1
    x += 1

# Output:

# N: 5

# 1
# 2 3
# 3 4 5
# 4 5 6 7
# 5 6 7 8 9
