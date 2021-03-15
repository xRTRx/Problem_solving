
if __name__ == '__main__':
    try:
        name = input()
        if len(name) < 4:
            raise ValueError
    except:
        print("Invalid Name")
    else:
        print("Account Created")
