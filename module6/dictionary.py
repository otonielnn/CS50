words = set()

def load(dicitonary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip())
    close(file)
    return true
