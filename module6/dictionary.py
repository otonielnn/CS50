words = set()

def check(word):
    if word in words:
        return True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip())
    close(file)
    return True

def size():
    return len(words)

def unlaod():
    return True
