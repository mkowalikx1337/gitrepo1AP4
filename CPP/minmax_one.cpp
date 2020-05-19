/*
 * minmax_one.cpp
 */

#include <iostream>

using namespace std;
   
   
int main()
{   
    srand(time(NULL));
    int i;
    int n;
    int min;
    int maks;
    int x;
    int y;
    i=0;
    y=0;
    cout << "Podaj ilość liczb?: ";
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++) {
        tab[i] = rand() % 50;
    }
    cout << "Szczęśliwe liczby: ";
    for(int i=0; i<n; i++) {
        cout <<tab[i]<<", ";
    }
    cout << endl << "---" << endl;
    x=n/2;
    int tbmin[x];
    int tbmaks[x];
    for(int i=0;i<n-1;i=i+2){
        cout << tab[i]<< " " << tab[i + 1]<< endl;
        if(tab[i] <= tab[i + 1]){
            tbmin[y]=tab[i];
            tbmaks[y]=tab[i + 1];
        }
        else{
            tbmaks[y]=tab[i];
            tbmin[y]=tab[i + 1];
        }
        k=k + 1;
    }
    cout << endl <<"---"<< endl;
    if(n % 2 != 0){
        cout << tab[n - 1] << " " << tab[n - 2];
        if(tab[n - 1] < tab[n - 2]){
            tbmin[x]=tab[n - 1];
        }
        else{
            tbmaks[i]=tab[i + 2];
        }
    }
    cout << endl << "---"<< endl;
    cout << "Mniejsze liczby:";
    for(int i=0; i<x; i++) {
        cout <<tbmin[i]<<", ";
    }
    cout<<endl;
    cout << "Większe liczby:";
    for(int i=0; i<x; i++) {
        cout <<tbmaks[i]<<", ";
    }
    min = tbmin[0];
    for(int i=0;i<x;i++){
        if(min>tbmin[i]){
            min = tbmin[i];
        }
    }
    maks = tbmaks[0];
    for(int i=0;i<x;i++){
        if(maks<tbmaks[i]){
            maks = tbmaks[i];
        }
    }
    cout << endl << "---" << endl;
    cout << "Najmniejsza liczba:" << min << endl;
    cout << "Najwieksza liczba:" << maks << endl;
    return 0;
}
