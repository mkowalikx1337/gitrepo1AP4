liczby = [12, 11, 8, 6, 8, 4, 10, 5, 2, 3, 9]

liczba = int(input('Podaj liczbę: '))

#if (liczba in liczby):
#    print("Jest")
#else:
#    print("nie ma")
x = 0

def wersja1():
    n = 0
    for i in range(len(liczby)):
        if liczba == liczby[i]:
            print("Znalazłem")
        print(n)
    print("Nie znalazłem")
#for i in range(len(liczby)):
#    if liczba == liczby[i]:
#        print("Znalazłem")
#    x += 1
#print("Nie znalazłem")
#print(x)

wersja1()

"""
Złożoność:
Lp_min = 1
Lp_max = n
0(n)
"""
