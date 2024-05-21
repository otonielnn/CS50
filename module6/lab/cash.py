change = -1

while change < 0:
    try:
        change = float(input("Changed owed: "))
    except ValueError:
        print("Write just numbers")

cents = round(change * 100)
coins = 0

while cents > 0:
    if cents >= 25:
        cents -= 25
        coins += 1
    elif cents >= 10:
        cents -= 10
        coins += 1
    elif cents >= 5:
        cents -= 5
        coins += 1
    else:
        cents -= 1
        coins += 1

print(coins)