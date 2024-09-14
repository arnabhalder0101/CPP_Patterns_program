n = int(input("N :"))
i = 0
while i < n:
    j = n-1
    while j > i:
        print("   ", end=" ")
        j -= 1

    k = 0
    while k < (i + 1):
        print(" * ", end=" ")
        k += 1

    print()
    i += 1

# output:
#
# N :4
#
#              *
#          *   *
#      *   *   *
#  *   *   *   *
