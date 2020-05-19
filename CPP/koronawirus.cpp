/*
 * koronawirus.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a;
    cout << "Podaj liczbę: " << endl;
    cin >> a;
    if(a > 0){
        cout << "Jesteś chory na koronawirusa!" << endl;
    }
    else {
        cout << "Jesteś zdrowy" << endl;
    }
	return 0;
}

