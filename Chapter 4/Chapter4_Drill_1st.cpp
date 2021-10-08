#include "std_lib_facilities.h"


int main(){

bool TerminaterWasHit=false;
int CurrentNumber1 = 0, CurrentNumber2 = 0;
char OutgoingCharachter='W';
	
cout << "Give me two integer Values please!(Or you can terminate the program at anytime with the '|' (pipeline) charachter)" << endl;
cin >> CurrentNumber1 >> CurrentNumber2;
cout << "first number is=" << CurrentNumber1 << " second number is=" << CurrentNumber2 << endl;

		if (CurrentNumber1 == CurrentNumber2) 
			cout << "The First number and The Second number are equal." << endl;
		if (CurrentNumber1 < CurrentNumber2) 
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber2 << endl;
		if (CurrentNumber1 > CurrentNumber2) 
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber1 << endl;
			
		cout << "Please enter anything if you would like to countinue, or enter '|' to stop the program" << endl;
		cin >> OutgoingCharachter;
		if(OutgoingCharachter=='|') 
		{
			TerminaterWasHit=true;
			goto jumploop;
		}else		
		
		
	while (OutgoingCharachter!='|')
	{
		
		cout << "Give me two integer Values please!" << endl;
		cin >> CurrentNumber1 >> CurrentNumber2;
						
		cout << "first number is=" << CurrentNumber1 << " second number is=" << CurrentNumber2 << endl;

		if (CurrentNumber1 == CurrentNumber2) 
			cout << "The First number and The Second number are equal." << endl;
		if (CurrentNumber1 < CurrentNumber2) 
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber2 << endl;
		if (CurrentNumber1 > CurrentNumber2) 
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber1 << endl;
			
		cout << "Please enter anything if you would like to countinue, or enter '|' to stop the program" << endl;
		cin >> OutgoingCharachter;
	}
jumploop:
if(TerminaterWasHit)
{
cout << "Thank you for your attention. Come and Use this program again, whenever you would like to!\n";
return 0;
}
return 0;
}
