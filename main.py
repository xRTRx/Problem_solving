import math

if __name__ == '__main__':
    # name = input()
    # inspectors = int(input())
    # string = input().split()
    inspectors = 2
    name = "Artur"
    string = "Eric Max Alex Anakin Tom Samuel".split()
    string.append(name)
    string.sort()
    result = math.ceil((string.index(name) + 1) / inspectors) * 20
    print(result)
