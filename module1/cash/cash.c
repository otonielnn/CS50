 float n = get_positive_float();
    int cents = round(n * 100), coins = 0;
    // Passing on money owed
    do
    {
        if (cents >= 25)
        {
            cents -= 25;
        }
        else if (cents >= 10)
        {
            cents -= 10;
        }
        else if (cents >= 5)
        {
            cents -= 5;
        }
        else
        {
            cents -= 1;
        }
        coins++;
    }
    while (cents > 0);
    // Show amount of coins
    printf("coins: %i\n", coins);