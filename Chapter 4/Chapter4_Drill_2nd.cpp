#include "std_lib_facilities.h"




//Checking wheter the entered Unit is a correct one!
bool ItsACorrectUnit(string unit)
{
	switch(string unit){
		case "cm":
			return true;
			break;
		case "m":
			return true;
			break;
		case "in":
			return true;
			break;
		case "ft":
			return true;
			break;
		default:
			return false;
			break;		
	}
}
//Quick Conversion Module:
double AnythingtoM(double Value,string unit)
{
double M=0;
switch(string unit){
		case "cm":
			M= Value/100;
			break;
		case "m":
			M= Value;
			break;
		case "in":
			M= Value/39.37;
			break;
		case "ft":
			M= Value/3.28;
			break;
		default:
			cerr << error("Incorrect measurement Unit!");
			break;		
	}
return	M;
} 

//Quick Sorting Method for later
Vector<double> SortedValueList(<double> Valuelist,double Highest, double Lowest, int Size)
{
	
	Vector<double> SortedValueList;
	SortedValueList[0]=lowest;		//Placing the lowest value to the beginning!
	SortedValueList[Size-1]=Highest;	//Placing the ending Value to the end of the list!
	int FirstPivotPoint=Size/2;	//Pivot point numero uno..
	double SortingPairs[2];
	
	
	for (int i = 1; i < Size-2; i++)
	{
		Valuelist[i]=SortingPairs[0];			//The list items equal a pair
		Valuelist[i+1]=SortingPairs[1];		
		double intermediary;				//for interchanging values
		if(SortingPairs[1]<SortingPairs[0]){		//if the second is smaller than the first pair, they switch places!
		intermediary=SortingPairs[1];
		
		Valuelist[i]=SortingPairs[1];
		Valuelist[i+1]=SortingPairs[0]
		}
	}
	
};
int main(){
//Terminater Charachter statement- it can be used to exit from loops!
bool TerminaterWasHit=false;
double Value1 = 0.0;
string Unit1="";
char OutgoingCharachter='W';
double highestSoFar;
double lowestSoFar;
double Total=0;
Vector<double> ValueList;
cout << "Give me a distance in the following units: cm-m (centimeters and meters) -or in- in-ft (inches and feet)" << endl;
cin >> Value1 >> Unit1 ;
if(ItsACorrectUnit(Unit1))
{
	lowestSoFar=AnythingtoM(Value1, Unit1);
	highestSoFar=AnythingtoM(Value1, Unit1);
	Total+=AnythingtoM(Value1, Unit1);
	ValueList.pushback(AnythingtoM(Value1, Unit1));
	
}
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
		cin >> Value1 >> Unit1;
		
		
		if(ItsACorrectUnit(Unit1))
				{
				if(Value1<lowestSoFar) lowestSoFar=AnythingtoM(Value1, Unit1);
				if(Value1<highestSoFar) highestSoFar=AnythingtoM(Value1, Unit1);
				Total+=AnythingtoM(Value1, Unit1);
				ValueList.pushback(AnythingtoM(Value1, Unit1));
				}
	
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
