used = set()
try:
    while True:
        line = input().split()
        efficientLine = ""
        for word in line:
            if word.lower() not in used:
                efficientLine += word + " "
                used.add(word.lower())
            else:
                efficientLine += ". "
        print(efficientLine)
except EOFError as e:
    pass