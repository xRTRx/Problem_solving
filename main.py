import math

if __name__ == '__main__':
    players = [180, 172, 178, 185, 190, 195, 192, 200, 210, 190]
    mean = sum(players) / len(players)
    variance = sum((i - mean) ** 2 for i in players) / len(players)
    # standard deviation = √variance
    sd = math.sqrt(variance)
    count = 0
    for i in players:
        if mean + sd > i > mean - sd:  # (199 178)
            count += 1
    print(count)
