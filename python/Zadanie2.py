#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    """
    2)Napisz program, który wypisuje kolejne liczby naturalne oddzielone spacjami z dodatniego przedziału <n,m> określonego przez użytkownika.
    """
    liczba = 0
    n = int(input("Podaj liczbe n: "))
    m = int(input("Podaj liczbe m: "))
    for i in range(n, m + 1, 2):
        liczba = liczba + 1
    print(liczba)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
