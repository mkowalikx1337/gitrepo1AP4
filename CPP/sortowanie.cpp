/*
 * sortowanie.cpp
 */


#include <iostream>
using namespace std;

void wypelnij(int tab[], int r, int maks) {
    srand(time(NULL));
    for(int i=0; i<r; i++) {
        tab[i] = rand() % (maks + 1);
    }
}


void drukuj(int tab[], int r) {
    srand(time(NULL));
    for(int i=0; i<r; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void sort_bubble(int tab[], int r){
    for (int j = r-1; j>0; j--){
        for (int i=0; i < j; i++){
            cout << i << "," << i+1 << " ";
            if (tab[i] > tab[i+1]){
                zamien(tab, i);
            }
        }
        cout << endl;
    }
}

void zamien(int tab[], int i){
    int tmp = tab[i+1];
    tab[i+1]=tab[i];
    tab[i] = tmp;
}

int main(int argc, char **argv)
{
	int r = 10;
    int maks = 100;
    int tab[r];
    wypelnij(tab, r, maks);
    drukuj(tab,r);
    sort_bubble(tab, r);
	return 0;
}

