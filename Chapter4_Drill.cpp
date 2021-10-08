#include "std_lib_facilities.h"
#include <cmath>

int main(){

bool TerminaterWasHit;
double CurrentNumber1 = 0.0, CurrentNumber2 = 0.0;

cout << "Give me two integer Values please!(Or you can terminate the program at anytime with the '|' (pipeline) charachter)" << endl;



	

	while (cin >> CurrentNumber1 >> CurrentNumber2)
	{
		cout << "first number is=" << CurrentNumber1 << " second number is=" << CurrentNumber2 << endl;

		if (CurrentNumber1 == CurrentNumber2) 
		cout << "The First number and The Second number are equal." << endl;
		if (a < b) 
		cout << "Your maximum of(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber2 << endl;
		if (a > b) 
		cout << "Your maximum of(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << a << endl;
		
		if ((CurrentNumber1 - CurrentNumber2) <= 0.01) 
		cout << "Wow your numbers are actually almost equal!" << endl;
	}


return 0;
}
