#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan=0,money=0,pay=0;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>money;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i = 0;
	do {
		
		double interest = (money/100)*loan;
		double total = loan+interest;
		if (total >= pay){
			double newbalance = total - pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
			loan = newbalance;
		}else if(total <= pay){
			pay = total;
			double newbalance = total - pay;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i+1; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << pay;
			cout << setw(13) << left << newbalance;
			cout << "\n";
			loan = newbalance;
		}

		i++;	
	}
	while (loan != 0);
	
	return 0;
}
