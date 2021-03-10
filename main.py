def spell(txt):
    if len(txt) == 1:
        print(txt)
    else:
        print(txt[-1])
        return spell(txt[:-1])


if __name__ == '__main__':
    txt = input()
    spell(txt)
    