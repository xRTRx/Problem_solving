def decor(func):
    def wrap(arr, x):
        r = func(arr, x)
        print(r[0])

    return wrap


@decor
def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    o = 0
    while low <= high:
        o += 1
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid, o
    return -1, o


if __name__ == '__main__':
    binary_search([0, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 19], 9)
