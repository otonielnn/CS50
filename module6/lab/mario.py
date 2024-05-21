n = 0

while n < 1 or n > 8:
    n = int(input("Height: "))

def torre(n):
    for i in range(n):

        j = n
        while j > n:
            if n != 0:
                print(" ")

        h = 1
        for h in range(n):
            print("#", end=" ")

        print()
