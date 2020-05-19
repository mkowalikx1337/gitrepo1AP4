#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  minmax.py

import random

def losujLiczby(lista, ile, maks):
	for i in range(ile):
		lista.append(random.randint(0, maks))

def min(tab, n):
	min = tab[0]
	for i in range(1, n):
		if tab[i] < min:
			min = tab[i]
	return min
	
def max(tab, n):
	max = tab[0]
	for i in range(1, n):
		if tab[i] > max:
			max = tab[i]
	return max
	
def minmax(tab, n):
	min = max = tab[0]
	for i in range(1, n):
		if tab[i] < min:
			min = tab[i]
		if tab[i] > max:
			max = tab[i]
	return min, max

def main(args):
	tab = [] # pusta lista
	n = int(input("Ile liczb? "))
	MAKS = 50
	losujLiczby(tab, n, MAKS)
	
	print(tab)
			
	min_el = min(tab, n)
	max_el = max(tab, n)
	print(min_el, " ", max_el)
	min_el, max_el = minmax(tab, n)
	print(min_el, " ", max_el)
	
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
