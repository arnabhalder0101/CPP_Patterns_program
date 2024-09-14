n = int(input("N : "))
i = 0
while i<n:
    if (i==0 or i==(n-1)):
        j = 0
        while j < n:
            print(" * ", end="")
            j+=1
        print()

    else:
        #code
        j = 0
        while j<n:
            if (j==0 or j==(n-1)):
                print(" * ", end="")
            else:
                print(" 1 ", end="")
            j+=1
        print()
    i+=1

# output

# n = 10

#  *  *  *  *  *  *  *  *  *  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  1  1  1  1  1  1  1  1  *
#  *  *  *  *  *  *  *  *  *  *
