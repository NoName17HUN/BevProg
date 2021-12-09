#include "std_lib_facilities.h"	

struct Date {
int y;			
int m;			
int d;			
};

void init_day(Date& date, int y, int m, int d){
	if (y > 0)
		date.y = y;
	else
		error("invalid year");

	if(m <= 12 && m > 0)
		date.m = m;
	else
		error("invalid month");

	if(d <= 31 && d > 0)
		date.d = d;
	else
		error("invalid day");
}

void add_day(Date& date, int n){
	date.d += n;

	if (date.d > 31){
		date.m++;
		date.d -= 31;
		if(date.m > 12){
			date.y++;
			date.m -=12;
		}
	}
}

int main(){
	try{
	Date today;
	init_day(today, 1978, 6, 25);

	cout << today.y << ". " << today.m << ". " << today.d << ". "  << endl;

	Date tomorrow(today);
	add_day(tomorrow, 1);
	cout << tomorrow.y << ". " << tomorrow.m << ". " << tomorrow.d << ". "  << endl;
			
	return 0;			
}
	catch(exception& e)
	{
    		cerr << e.what() << '\n';
    		return 1;
	}
	
	catch(...)
	{
    		cerr << "Unknown exception!\n";
    		return 2;
	}}