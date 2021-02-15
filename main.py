if __name__ == '__main__':
    # string = input()
    string = "I have 2 apples and 4 bananas"
    for i in range(10, 0, -1):
        string = string.replace(str(i), ['zero', 'one', 'two', 'three', 'four', 'five',
                                         'six', 'seven', 'eight', 'nine', 'ten'][i])
    print(string)
