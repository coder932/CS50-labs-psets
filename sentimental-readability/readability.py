from cs50 import get_string

text = get_string("Text: ")
numOfLetters = 0
numOfWords = 1
numOfSentences = 0
for i in range(len(text)):
    if text[i].isalpha():
        numOfLetters += 1
    elif text[i].isspace():
        numOfWords += 1
    elif text[i] == '.' or text[i] == '!' or text[i] == '?':
        numOfSentences += 1

l = numOfLetters / numOfWords * 100
s = numOfSentences / numOfWords * 100
index = 0.0588 * l - 0.29 * s - 15.8
index = round(index)
if index > 16:
    print("Grade 16+")
elif index > 1 and index < 17:
    print(f"Grade {index}")
else:
    print("Before Grade 1")