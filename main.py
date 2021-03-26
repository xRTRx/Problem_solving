import numpy as np

if __name__ == '__main__':
    data = np.array(
        [150000, 125000, 320000, 540000, 200000, 120000, 160000, 230000, 280000, 290000, 300000, 500000, 420000, 100000,
         150000, 280000])
    mean = np.mean(data)
    sdev = np.std(data)
    count = len(data[(data <= mean + sdev) & (data >= mean - sdev)])
    result = (count / data.size) * 100
    print(result)
