def pig_latin(s):
    i = 0
    result = str()
    temp = str()
    while i != len(s):
        temp = temp + s[i]
        if s[i] == ' ' or (len(s) - 1 == i):
            fl = temp[0]  # first letter
            temp = temp.replace(temp[0], '', 1)
            temp = temp.strip() + fl + "ay "
            result = result + temp
            temp = ""
        i = i + 1
    return result



if __name__ == '__main__':
    print(pig_latin("nevermind youve got them"))
    print(pig_latin("go over there"))
    print(pig_latin("sally knows best"))
    print(pig_latin("nevermind"))
