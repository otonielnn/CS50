text = input("Text: ")
letter = 0
words = 0
sentence = 0

for i in range(len(text))
    if text[i].isalpha():
        letters += 1

    if text[i] == " ":
        words += 1

    if text[i] == "." or text[i] == "!" or text[i] == "?":
        sentence +=1

words += 1

L = (letters / words) * 100
S = (sentence / words) * 100
indice = 0.0588 * L - 0.296 * S - 15.8
grade = round(indice)

if grade < 1:
    print("Before Grade 1")
elif grade >= 16:
    print("Grade 16+")
else:
    print(f"Grade {grade}")
