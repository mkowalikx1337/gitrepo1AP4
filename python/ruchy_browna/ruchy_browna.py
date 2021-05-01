
import matplotlib.pyplot as plt
import numpy as np
import random


def wykres(lx, ly, s, x, y, n):
    s = np.sqrt(x**2 + y**2)
    print("Wektor przesunięcia: {:.2f}".format(s))
    fig, ax = plt.subplots()
    ax.plot(lx, ly, 'ro--', lw=1.0)
    fig.canvas.set_window_title("Ruchy Browna")
    ax.set_title("Ruchy Browna")
    ax.grid()
    ax.set_xlabel("lx")
    ax.set_ylabel("ly")
    ax.legend(
        ["Ruchów: {:.2f} \nPrzemieszczenie: {:.2f}".format(n, s)],
        loc="best")
    ax.quiver(0, 0, lx.pop(), ly.pop(), angles='xy', scale_units='xy',
              scale=1)
    plt.show()


def main():
    n = int(input("Ile ruchów? "))
    x = y = 0
    r = 1
    lx = [x]
    ly = [y]
    for i in range(n):
        kat = random.randint(0, 360) * np.pi / 180
        x = x + np.cos(kat) * r
        y = y + np.sin(kat) * r
        lx.append(int(np.floor(x)))
        ly.append(int(np.floor(y)))
        
    s = np.sqrt(x**2 + y**2)
    
    wykres(lx, ly, s, x, y, n)
    return 0


main()