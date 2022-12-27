#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double nbal ,inter ,pbal ,tot;
	nbal = loan;
	pbal = loan;
	for(int i = 1;nbal != 0;i++){
		inter = pbal/100*rate;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << pbal;
		cout << setw(13) << left << inter;
			tot = pbal + inter;
		cout << setw(13) << left << tot;
			if(tot < pay){
				pay = tot;
			}
		cout << setw(13) << left << pay;
			nbal = tot - pay;
		cout << setw(13) << left << nbal;
		cout << "\n";
		pbal = nbal;
	}
	return 0;
}
