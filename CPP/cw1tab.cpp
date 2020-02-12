/*
 * cw1tab.cpp
 */
 
 /*
  * 1.Napisz program, który pobiera od użytkownika dwie 5-cyfrowe serie liczb 
  * całkowitych i zapisuje je w dwóch tablicach. 
  * Następnie program powinien obliczyć sumę elementówwkażdej tablicy i poinformować, która jest większa.
  */


#include <iostream>
using namespace std;

void pobierzLiczby1(int tablica1[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Podaj liczby: ";
        cin >> tablica1[i];
        }
    }

void pobierzLiczby2(int tablica2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Podaj liczby: ";
        cin >> tablica2[i];
    }
}

void oddajWynik(int tablica[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

void sumujTab(int tablica[], int n)
{
    
}

int main(int argc, char **argv)
{
	int n = 5;
    int tablica1[n];
    int tablica2[n];
    pobierzLiczby1(tablica1, n);
    cout << "Teraz czas na drugie pięć liczb" << endl;
    pobierzLiczby2(tablica2, n);
    oddajWynik(tablica1[], n)
    oddajWynik(tablica2[], n)
    int s1 = sumujTab(tablica1, n);
    int s2 = sumujTab(tablica2, n);
    return false;
}

