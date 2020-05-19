/*
 * bmi.cpp
 */
using namespace std;

int main(int argc, char **argv)
{
	
	int waga, wzrost;
	float bmi;
	cout << "Podaj wzrost(cm): " << endl;
	cin >> wzrost;
    if (wzrost < 50 or wzrost > 250){
        cout << "Podany wzrost jest nieprawidłowy, podaj go ponownie: " << endl;
        cin >> wzrost;
    }
    cout << "Podaj wage(kg): "<< endl;
    cin >> waga;
    if (waga < 15 or waga > 250){
        cout << "Podana waga jest nieprawidłowy, podaj ją ponownie: " << endl;
        cin >> waga;
    }
	
	bmi = (waga / (wzrost*wzrost))*10000;
	
	cout << "Twoje BMI wynosi: " << endl;
	cout << bmi << endl << endl;
	
	if (bmi < 18.5){
		cout << "Masz niedowage!" << endl;
	}
	if (bmi > 18.5 and bmi <= 24.9){
		cout << "Twoje BMI jest idealne!" << endl;
	}
	if(bmi > 25 and bmi < 30){
		cout << "Masz nadwage!" << endl;
	}
	if(bmi > 30){
		cout << "Masz otyłość!" << endl;
	}
	return 0
}
