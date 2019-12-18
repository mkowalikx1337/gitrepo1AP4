#!/usr/bin/env python
# -*- coding: utf-8 -*-
'''
1) Napisz program "zliczanie.py" zliczający oddzielnie liczby podzielne przez 5 i podzielne przez 7 wprowadzone z klawiatury. Program kończy działanie, kiedy użytkownik poda wartość 0.
Przez zakończeniem należy wydrukować ilość zliczonych liczb podzielnych przez 5 i 7.

'''

def main(args):
    a = int(input("Podaj liczbę a: "))
    licz5 = 0
    licz7 = 0
    while a != 0:
        if a % 5 == 0:
            licz5 = licz5 + 1
        if a % 7 == 0:
            licz7 = licz7 + 1
        a = int(input("Podaj liczbę a: "))
    print("Podzielnych przez 5: ", licz5)
    print("Podzielnych przez 7: ", licz7)
    return 0
    
    
    
    
    # ~while a > 0:
        # ~liczba = int(input("Podaj liczbę: "))
            # ~if liczba / 7:
                # ~print("eee")
                # ~continue 
            # ~a = a + liczba
            # ~if liczba / 5:
                # ~print(a)
    # ~else:
        # ~if a == 0:
            # ~print("Zakup wersje premium, aby uzyskać więcej opcji!")
        
    # ~return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))








































