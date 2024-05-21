n = 0

while n < 1 or n > 8:
    try:
        n = int(input("Height: "))
    except ValueError:
        print("Write a positive Integer number between 1 and 8")


for i in range(1, n + 1):
    for j in range(n - i):
        if i != 0:
            print(end=" ")

    for h in range(i):
        print("#", end="")

    print()
