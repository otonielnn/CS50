import csv

from cs50 import SQL

counts = {}

open("show.db", "w").close()
db = SQL("sqlite:///shows.db")

db.execute("CREATE TABLE shows (id INTEGER, title TEXT, PRIMARY KEY(id))")
db.execute("CREATE TABLE genres (show_id INTEGER, genre TEXT, FOREIGN KEY(show_id) REFERENCES shows(id)")

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
