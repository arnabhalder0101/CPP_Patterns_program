n = int(input("N: "))
i = 0
while i < n:
    a = 65 + i
    j = 0
    while j < n:
        print(chr(a + j), end=" ")
        j += 1
    print()
    i += 1

# Output:

# N: 4

# A B C D
# B C D E
# C D E F
# D E F G
