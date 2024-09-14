n = int(input("N: "))
i = 0

while i < n:
    j = n - i
    while j > 0:
        print(" * ", end=" ")
        j -= 1

    k = 0
    while k < i:
        print(" - ", end=" ")
        k += 1

    l = 0
    while l < i:
        print(" 1 ", end=" ")
        l += 1

    m = n - i
    while m > 0:
        print(" % ", end=" ")
        m -= 1

    print()
    i += 1

# output:
#
# N: 8
#
#  *   *   *   *   *   *   *   *   %   %   %   %   %   %   %   %
#  *   *   *   *   *   *   *   -   1   %   %   %   %   %   %   %
#  *   *   *   *   *   *   -   -   1   1   %   %   %   %   %   %
#  *   *   *   *   *   -   -   -   1   1   1   %   %   %   %   %
#  *   *   *   *   -   -   -   -   1   1   1   1   %   %   %   %
#  *   *   *   -   -   -   -   -   1   1   1   1   1   %   %   %
#  *   *   -   -   -   -   -   -   1   1   1   1   1   1   %   %
#  *   -   -   -   -   -   -   -   1   1   1   1   1   1   1   %
