#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main(args):
    szer = int(input("Podaj szerokosc prostokata: "))
    wys = int(input("Podaj wysokosc prostokata: "))
    znak = input("Podaj z jakich znakow ma byc bydowany prostokat: ")
    print(znak * szer)
    print(znak, "           ", znak)
    print(znak * szer)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
