/*
 * srednia.cpp
 */


#include <iostream>
using namespace std;

void pobierzOceny(int tb[], int n){
    int ocena = 0;
    int i = 0;
    while (n > 0){
        cout << "Podaj ocenę: ";
        cin >> ocena;
        if (ocena > 0 && ocena < 7){
            tb[i] = ocena;
            i++;
            n--;
        }
    }
}

void drukuj(int tb[], int n){
    for (int i = 0; 0 < n; i++){
        cout << tb[i] << " ";
    }
}

float liczSrednia(int tb[], int n){
    int suma = 0;
    for (int i = 0; 0 < n; i++){
        cout << tb[i] << " ";
        suma = suma + tb[i];
    }

}

int main(int argc, char **argv)
{
    int n;
    cout << "Ile podasz ocen?";
    cin >> n;
    int oceny[n];
    pobierzOceny(oceny, n);
    liczSrednia(oceny, n);
	return 0;
}






























