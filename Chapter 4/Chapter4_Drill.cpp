#include "std_lib_facilities.h"


int main(){

bool TerminaterWasHit=false;
double CurrentNumber1 = 0.0, CurrentNumber2 = 0.0;
char OutgoingCharachter='W';
double highestSoFar;
double lowestSoFar;
cout << "Give me two integer Values please!(Or you can terminate the program at anytime with the '|' (pipeline) charachter)" << endl;
cin >> CurrentNumber1 >> CurrentNumber2;

cout << "first number is=" << CurrentNumber1 << " second number is=" << CurrentNumber2 << endl;

		if (CurrentNumber1 == CurrentNumber2) 
			cout << "The First number and The Second number are equal." << endl;
		if (CurrentNumber1 < CurrentNumber2) 
			{
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber2 << endl;
			highestSoFar=CurrentNumber2;
			lowestSoFar=CurrentNumber1;
			}
		if (CurrentNumber1 > CurrentNumber2) 
			{
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber1 << endl;
			highestSoFar=CurrentNumber1;
			lowestSoFar=CurrentNumber2;
			}
		if (((CurrentNumber1 - CurrentNumber2) <= 0.01 ) || ((CurrentNumber2 - CurrentNumber1) <= 0.01 ) ) 
			cout << "Wow your numbers are actually almost equal!" << endl;
			
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
			{
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber2 << endl;
			if(CurrentNumber2>=highestSoFar) highestSoFar=CurrentNumber2;
			if(CurrentNumber1<=lowestSoFar) lowestSoFar=CurrentNumber1;
			}
		if (CurrentNumber1 > CurrentNumber2) 
			{
			cout << "Your maximum from(" << CurrentNumber1 << "," << CurrentNumber2 << ") is " << CurrentNumber1 << endl;
			if(CurrentNumber1>=highestSoFar) highestSoFar=CurrentNumber1;
			if(CurrentNumber2<=lowestSoFar) lowestSoFar=CurrentNumber2;
			
			}
		if ((CurrentNumber1 - CurrentNumber2) <= 0.01) 
			cout << "Wow your numbers are actually almost equal!" << endl;
		
		if(CurrentNumber1==lowestSoFar) cout << "The number :"<< CurrentNumber1 << " -you gave this round, is actually the lowest\n";
		else if(CurrentNumber1==highestSoFar) cout << "The number you :"<< CurrentNumber1 << " gave this round, is actually the highest\n";
		
		if(CurrentNumber2==lowestSoFar) cout << "The number: "<< CurrentNumber2 << " -you gave this round, is actually the lowest\n";
		else if(CurrentNumber2==highestSoFar) cout << "The number: "<< CurrentNumber2 << " -you gave this round, is actually the highest\n";			
		
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
