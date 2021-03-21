class Stack:
    def __init__(self):
        self.__stack = list()

    def push(self, item):
        self.__stack.append(item)

    def pop(self):
        try:
            self.__stack.pop()
        except IndexError:
            pass

    def size(self):
        return len(self.__stack)


def balanced(expression):
    s = Stack()
    count = 0
    for i in expression:
        if i == '(':
            s.push(i)
            count += 1
        elif i == ')':
            s.pop()
            count -= 1
    if s.size() == 0 and count == 0:
        return True
    else:
        return False


if __name__ == '__main__':
    print(balanced(input()))
    print(balanced("(a() eee))"))
    print(balanced("(x=y)+(ky+io(4))"))
    print(balanced("5(o(oo))) 9("))
