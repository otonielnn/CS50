n = 0

while n < 1 or n > 8:
    n = int(input("Height: "))

for i in range(n + 1):
    j = n
    for j in range(j ,i , -1):
        if i != 0:
            print(" ", end="")


    h = 1
    for h in range(i):
        print("#", end=" ")

    print()
