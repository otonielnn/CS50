from cs50 import get_string

s = get_string("Do you agree? ")

if s.lower == "y":
    print("Agreed.")
elif s.lower == "n":
    print("Not Agreed")
