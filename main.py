import re

if __name__ == '__main__':
    # string = input()
    string = "H#i w@hat7s yo0u&r n@a$me?"
    string = re.sub('[^a-zA-Z0-9 \n]', '', string)
    print(string)

