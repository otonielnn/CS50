n = int(input("Number: "))

i = 0
cc = n

while cc > 0:
    cc = cc / 10
    i++

if i != 13 and i != 15 and i != 16:
    print("INVALID")

sum1 = 0
sum2 = 0
x = n
total = 0
mod1 = 0
mod2 = 0
d1 = 0
d2 = 0

while x > 0:
    mod1 = x % 10
    x = x / 10
    sum1 = sum1 + mod1

    mod2 = x % 10
    x = x / 10

    mod2 = mod2 * 2
    d1 = mod2 % 10
    d2 = mod2 / 10
    sum2 = sum2 + d1 + d2

total = sum1 + sum2

if total % 10 != 0:
    print("INVALID")

start = n

while (start > 100):
    start = start / 10

if (start / 10 == 5) and (0 < start % 10 && start % 10 < 6):
    print("AMEX")
elif start / 10 == 4:
    print("VISA")
else:
    print("INVALID")
