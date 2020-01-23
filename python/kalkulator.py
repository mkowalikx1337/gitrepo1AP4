#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

wynik = 0
znak = ' '   

 
def pobierzZnak():
    global znak 
    znak = (input('Podaj jakie działanie chcesz wykonać: +, - , *, / : '))
    return 0
    
def pobierzLiczbe():
    liczba1 = int(input('Podaj 1 liczbę: '))
    return liczba1
    
def pobierzLiczbe2():    
    liczba2 = int(input('Podaj 2 liczbę: '))
    return liczba2
    
def dodaj(liczba1, liczba2):
    global wynik
    wynik = liczba1 + liczba2

def odejmij(liczba1, liczba2):
    global wynik
    wynik = liczba1 - liczba2

def iloczyn(liczba1, liczba2):
    global wynik
    wynik = liczba1 * liczba2


def iloraz(liczba1, liczba2):
    return liczba1 / liczba2

def drukujWynik():
    print('Wynik: ', wynik)
        

def main(args):
    znak = pobierzZnak()
    liczba1 = pobierzLiczbe()
    liczba2 = pobierzLiczbe2()
    if znak == '+':
        dodaj(liczba1, liczba2)
        print(wynik)
    elif znak == '-':
        odejmij(liczba1, liczba2)
        print(wynik)
    elif znak == '*':
        iloczyn(liczba1, liczba2)
        print(wynik)
    elif znak == '/':
        iloraz(liczba1, liczba2)
        print(wynik)
    else:
        print('Błędny znak!')
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
