#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    '''
    3) Napisz program, który wyświetla kwadraty kolejnych liczb naturalnych, począwszy od zera a skończywszy na kwadracie liczby podanej przez użytkownika
    '''
    # ~m = 0
    # ~n = int(input("Podaj ostatnia liczbę: "))
    # ~for i in range(n > m):
        # ~print(m * m, ' ', end = ' ' )
    # ~return 0
    n = m = 0
    m = int(input("Podaj liczbe m: "))
    while m < n:
        m = int(input("Podaj liczbe m: "))
    n = m * m
    print(n, ' ', end = ' ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
