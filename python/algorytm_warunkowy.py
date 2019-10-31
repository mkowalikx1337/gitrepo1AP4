#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    # a = 10
    a = int(input("Podaj liczbę: "))
    # b = 5
    b = int(input("Podaj liczbę: "))
    if (a > b):
        print(a)
    else:
        print (b)    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
