#!/usr/bin/env python
# -*- coding: utf-8 -*-
 


def main(args):
    a = int(input("Podaj a: "))
    b = int(input("Podaj b: "))
    if a == 0:
        if b == 0:
            print("Nieskończenie wiele rozwiązań")
        else:
            print("Równianie sprzeczne")
    else:
        x = -b / a
        print("x = ", x)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
