/*
 * cw2tab.cpp
 * 
 * Napisz program, który wypełnia tablicę dwuwymiarową o wymiarach w=5 (liczba wierszy)i  k=10  (liczba kolumn), 
 * wartościami losowymi z zakresu  <0;n>. Wartość  n  pobierz odużytkownika.
 */


#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void wypelnij(int t[][10], int w, int k, int n)
{
    srand(time(NULL));
    for (int i = 0;i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            t[i][j] = rand() % (n + 1); 
            cout << i << "," << j << " " << t[i][j] << endl;
        }
    }
}

void sumujW(int t[][10], int w, int k, int n)
{
    int sumaW = 0;
    for (int i = 0;i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << setw(4) << t[i][j];
            sumaW += t[i][j];
        }
        cout << setw(6) <<  sumaW << endl;
    }
    // wydrukuj maksymalną sumę oraz indeks wiersza
}

void sumujK(int t[][10], int w, int k, int n)
{   
	int max = 2, min = 1, pozycja = 0; 
	for(i=1; i<n; i++)
    {
        if(liczba<min)
        {
            min=liczba;
        }
        if(liczba>max)
        {
            max=liczba;
        }
        pozycja = i;
    }
    cout << endl;
    cout << "Liczba max: " << max << ", " << "Występuje w kolumnie: " << i << endl;

}

int main(int argc, char **argv)
{
	int n = 0;
    cout << "Podaj maksymalną wartość kumpel: ";
    cin >> n;
    int w = 5;
    int k = 10;
    int t[w][10];
    //wypelnij(t, w, k, n);
    sumujW(t, w, k, n);
    sumujK(t, w, k, n);
	return 0;
}

