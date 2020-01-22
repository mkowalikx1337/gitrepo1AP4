#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

wynik = 0
liczba1 = 0
liczba2 = 0
znak = 0

def pobierzOperacje():
    znak = (input('Podaj jakie działanie chcesz wykonać: +, - , *, / : '))

def pobierzLiczbe():
    liczba1 = int(input('Podaj 1 liczbę:' ))
    liczba2 = int(input('Podaj 2 liczbę'))
    
def dodaj():

def odejmij():

def iloczyn():

def iloraz():
    
def drukujWynik():
    print(wynik)
    
    
def main(args):
    global wynik
    pobierzOperacje()
    pobierzLiczbe()
    wykonaj()
    wynik = drukujWynik()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
