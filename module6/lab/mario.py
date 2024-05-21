n = 0

while n < 1 or n > 8:
    n = int(input("Height: "))

for i in range(n + 1):
    h = 1
    for h in range(i):
        print("#", end=" ")

    print()
