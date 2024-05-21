import csv
import sys

def main():

    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    with open(sys.argv[1], "r") as database_file:
        reader = csv.DictReader(database_file)
        database = [row for row in reader]

    with open(sys.argv[2], "r") as sequence_file:
        sequence = sequence_file.read()

    str_counts = {}
    for key in database[0].keys():
        if key == "name":
            continue
    str_counts[key] = longest_match(sequence, key)

    for row in database:
        match = True
        for key in row.keys():
            if key == "name":
                continue

            if int(row[key]) != str_counts[key]:
                match = False
                break

            if match:
                print(row["name"])
                return
    print("No match")

def longest_match():
    pass
