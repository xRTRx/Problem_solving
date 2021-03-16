if __name__ == '__main__':
    with open("books.txt", "a") as f:
        while True:
            i = input()
            if i == "stop":
                break
            f.write(i + '\n')

    with open("books.txt", "r") as f:
        for i in f:
            for x in i.split():
                print(x[0], end='')
            print()
