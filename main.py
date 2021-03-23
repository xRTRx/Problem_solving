data = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3]
    mean = sum(data) / len(data)
    variance = sum((i - mean) ** 2 for i in data) / len(data)
    print(variance)  # variance - дисперсия
