#include "../lib_files/std_lib_facilities.h"
class Int {
int value;
public:
Int() : value(0) { }                      
Int(const Int& arg) : value(arg.value) { }  
Int(int v) : value(v) { }                
Int& operator=(const Int& v) { value = v.value; }  
int get() const { return value; }
};
Int operator+(const Int& v1, const Int& v2)
{
return Int(v1.get() + v2.get());
}
Int operator-(const Int& v1, const Int& v2)
{
return Int(v1.get() - v2.get());
}
Int operator*(const Int& v1, const Int& v2)
{
return Int(v1.get() * v2.get());
}
Int operator/(const Int& v1, const Int& v2)
{
return Int(v1.get() / v2.get());
}
ostream& operator<<(ostream& os, const Int& d)
{
os << d.get();
return os;
}
int main()
try {
Int Integer1;
Int Integer2 = 2;
Int Integer3(Integer2);
Int Integer4;
Integer4 = Integer2;
Int Integer5 = 6;
//output with cout
cout << "Integer1 (using default constructor): " << Integer1 << "\n";
cout << "Integer2 (using the constructor with arguments): " << Integer2 << "\n";
cout << "Integer3 (copied constructor from Integer2): " << Integer3 << "\n";
cout << "Integer4 (copied and assigned  from Integer2): " << Integer4 << "\n";
cout << "Integer5 (using the constructor with arguments): " << Integer5 << "\n";
cout << "Integer2 + Integer5 = " << Integer2+Integer5 << "\n";
cout << "Integer5 - Integer2 = " << Integer5-Integer2 << "\n";
cout << "Integer2 * Integer5 = " << Integer2*Integer5 << "\n";
cout << "Integer5 / Integer2 = " << Integer5/Integer2 << "\n";
}
catch (exception& e) {
cerr << "exception: " << e.what() << endl;
}
catch (...) {
cerr << "exception\n";
}