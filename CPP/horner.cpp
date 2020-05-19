#include <iostream>

int main(int argc, char **argv)
{
	int argument;
	cout << "Podaj argument";
	cin >> argument;
	int stopien;
	cout << "Podaj stopien";
	cin >> stopien;
	int n;
	n = stopien + 1;
	int wynik;
	int wsp[n];
	for(int i=0;i < n; i++){
	    cout << "Podaj współczynnik:";
	    cin >> tab[i];
	}
	for(int j = 0; j < stopien + 1; j++){
	    if(j == 0){
	        wynik = wsp[i];
	    }
	    else{
	        wynik = argument * wynik + wsp[i];
	    }
	}
    
    cout << wynik;	
}

