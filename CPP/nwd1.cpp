/*
 * nwd1.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    while (a != b){
        if(a > b){
            a = a - b;
            cout << a << endl;
        }
        else{
            b = b - a;
            cout << b << endl;
        }
    } 
    else if{
        cout << a << endl;
    }
	return 0;
}

