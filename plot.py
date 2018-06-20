import numpy as np
import matplotlib.pyplot as plt
import sys

def main(fname):
    f = open(fname, 'r')
    resx, resy = [int(x) for x in f.readline().split(' ')]
    frame = np.zeros((resy, resx))
    for i in range(resy):
        row = f.readline().split(' ')[:-1]
        for j, val in enumerate(row):
            frame[i][j] = float(val)

    plt.imshow(frame, cmap=plt.cm.BuPu_r)
    plt.show()


if __name__ == '__main__':
    main(sys.argv[1])
