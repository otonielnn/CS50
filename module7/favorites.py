import csv

from cs50 import SQL

counts = {}

open("show.db", "w").close()

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:

    reader = csv.DictReader(file)

    for row in reader:

        title = row["title"].lower()

        if title in counts:
            counts[title] += 1
        else:
            counts[title] = 1

for title, count in sorted(counts.items(), key=lambda item: item[1], reverse=True):
    print(title, count, sep=" | ")
