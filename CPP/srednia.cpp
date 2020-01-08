/*
 * srednia.cpp
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int oceny = 10;
    int ocena;
    cout << "Podaj ocenę: " << endl;
    cin >> ocena;
    while (ocena > 0){
        if (ocena < 7){
            
        } else {
            printf("Błędna liczba!");
            cin >> ocena;
            return oceny;
        }
    }
    cout << "Średnia wynosi: " << ocena / oceny << endl;
    
	return 0;
}

