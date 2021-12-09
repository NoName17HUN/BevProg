#include "std_lib_facilities.h"	

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d);
	void add_day(int n);
	int get_month() { return month; }
	int get_day() { return day; }
	int get_year() { return year; }
};

Date::Date(int y, int m, int d){
if (y > 0)
		year = y;
else
		error("invalid year");

if(m < 13 && m > 0)
		month = m;
else
		error("incorrect month");

if(d < 32 && d > 0)
		day = d;
else
		error("invalid day");
}

void Date::add_day(int n)
{
	day += n;

if (day > 31)
	{

		month++;
		day -= 31;
	if(month > 12)
		{
			year++;
			month -=12;
		}
	}
}

int main()			
{
	try{
	Date today{2016, 6, 25};
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;
	

	Date tommorow(today);
	tommorow.add_day(1);
	cout <<"Date: " << tommorow.get_year() << ". " << tommorow.get_month() << ". " << tommorow.get_day() << ". " << endl;
	
	Date my_birthday {1999, 1, 26};
	cout << "Date: " << my_birthday.get_year() << ". " << my_birthday.get_month() << ". " << my_birthday.get_day() << ". " << endl;
			
	return 0;

}
catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 1;
	}
	
	catch(...)
	{
    		cerr << "What did you do??\n";
    		return 2;
	}
}