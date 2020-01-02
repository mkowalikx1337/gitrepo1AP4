/*
 * kalkulator.cpp
 */


#include <iostream>
using namespace std;

void dodaj(){
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
}
void odejmij(){
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Różnica: " << a - b << endl;
}
void mnozenie(){
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Iloczny: " << a * b << endl;
}
void dzielenie(){
    int a, b;
    cout << "Podaj dwie liczby: " << endl;
    cin >> a >> b;
    cout << "Iloraz: " << a / b << endl;
}

int main(int argc, char **argv)
{
	char operacja;
    cout << "Jakie działanie chcesz wykonać (+, -, *, /)?" << endl;
    cin >> operacja;
    switch(operacja){
        case '+':
            dodaj();
        break;
        case '-':
            odejmij();
        break;
        case '*':
            mnozenie();
        break;
        case '/':
            dzielenie();
        break;
        default:
            cout << "Nie rozumiem!" << endl;
        break;
    }
	return 0;
}
 
