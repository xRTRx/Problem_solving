import re
import math

if __name__ == '__main__':
    string = input()
    # string = "the longest word in the dictionary is..."  #7w avg = 4.42 -> 5
    string = re.sub('[^a-zA-Z0-9 \n]', '', string).split()
    wc = 0  # word count
    for i in string:
        wc += len(i)
    print(math.ceil(wc / len(wl)))
