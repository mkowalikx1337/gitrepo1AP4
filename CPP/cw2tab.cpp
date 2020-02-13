/*
 * cw2tab.cpp
 * 
 * Napisz program, który wypełnia tablicę dwuwymiarową o wymiarach w=5 (liczba wierszy)i  k=10  (liczba kolumn), 
 * wartościami losowymi z zakresu  <0;n>. Wartość  n  pobierz odużytkownika.
 */


#include <iostream>
#include <time.h>
using namespace std;

void wypelnij(int t[][10], int w, int k, int n)
{
    srand(time(NULL));
    cout << rand() % (n + 1) << endl;
}

int main(int argc, char **argv)
{
	int n = 0;
    //cout << "Podaj maksymalną wartość kumpel: " << endl;
    //cin >> n;
    int w = 5;
    int k = 10;
    int t[w][10];
    wypelnij(t, w, k, n);
	return 0;
}

