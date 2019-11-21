#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    """
    2)Napisz program, który wypisuje kolejne liczby naturalne oddzielone spacjami z dodatniego przedziału <n,m> określonego przez użytkownika.
    """
    n = m = 0
    while n < 1:
        n = int(input("Podaj liczbe n: "))
    while m < 1 or m <= n:
        m = int(input("Podaj liczbe m: "))
    for i in range(n, m + 1):
        print(i, ' ', end = ' ')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
