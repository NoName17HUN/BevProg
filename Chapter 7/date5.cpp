#include "std_lib_facilities.h"	

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {
	jan, feb, mar, apr, may, june, july, aug, sept, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}



class Date {
	int year;
	Month month;
	int day;
public:
	class Invalid {};
	Date(int y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	bool is_valid();
	void add_Day(int n);
	void add_Month(int n);
    void add_Year(int n); 
	int get_year(){ return year; }
	Month get_month(){ return month; }
	int get_day(){ return day; }
};

bool Date::is_valid()
{
	if (year < 0 || day < 1 || day > 31) return false;
	if (month < Month::jan || month > Month::dec) return false;
	return true;
}

void Date::add_Day(int n)
{
	day += n;

	if (day > 31)
	{

		++month;
		day -= 31;
		if(month == Month::jan)
		{
			year++;
			
		}
	}
}

void Date::add_Month(int n)
{
	++month;

	{if (month <= Month::dec)
		++month;
	if(month == Month::jan)
	{
		year++;
	}
}
}

void Date::add_Year(int n)
{
	year += n;
}

int main()			
{
	try{
	Date today{2016, Month::dec, 29};
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;
	

	Date tommorow(today);
	tommorow.add_Day(3);
	cout <<"Date: " << tommorow.get_year() << ". " << tommorow.get_month() << ". " << tommorow.get_day() << ". " << endl;
	
	today.add_Year(2);
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;

	today.add_Month(2);
	cout << "Date: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << endl;

	Date my_birthday {2001, Month::oct, 17};
	cout << "Date: " << my_birthday.get_year() << ". " << my_birthday.get_month() << ". " << my_birthday.get_day() << ". " << endl;
		
	return 0;

}
	catch(Date::Invalid){
		cout << "Error: Invalid date" << endl;
		return 1;
	}

	catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 2;
	}
	
	catch(...)
	{
    		cerr << "Unknown exception!\n";
    		return 3;
	}
}