#include "std_lib_facilities.h"	

struct Date {
int year;				
int month;				
int day;	
Date(int y, int m, int d);
void add_day(int n);

};
Date::Date(int y, int m, int d){
	if (y > 0)
		year = y;
	else
		error("invalid year");

	if(m <= 12 && m > 0)
		month = m;
	else
		error("invalid month");

	if(d <= 31 && d > 0)
		day = d;
	else
		error("invalid day");
}

void Date::add_day(int n)
{
	day += n;

	if (day > 31){
		month++;
		day -= 31;
		if(month > 12){
			year++;
			month -=12;
		}
	}
}

int main()			
{
	try{
	Date today{1962, 6, 25};
	
	
	cout << today.year << ". " << today.month << ". " << today.day << ". " << endl;
	Date tommorow(today);
	tommorow.add_day(1);
	cout << tommorow.year << ". " << tommorow.month << ". " << tommorow.day << ". " << endl;
			
	return 0;

}
catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 1;
	}
	
	catch(...)
	{
    		cerr << "OOPS what did you do?\n";
    		return 2;
	}
}