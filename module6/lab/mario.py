n = 0

while n < 1 or n > 8:
    n = int(input("Height: "))

for i in range(n + 1):
    j = n
    while j > i:
        if n != 0:
            print(" ", end=" ")

    h = 1
    for h in range(i):
        print("#", end=" ")

    print()
