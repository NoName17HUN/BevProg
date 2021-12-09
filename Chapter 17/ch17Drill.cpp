#include "std_lib_facilities.h"	
void print_array10(ostream& os, int* a)
{
	for(int i = 0; i < 10; ++i)
	{
		os << arr[i] << endl;
	}
}
void print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
	{
		os << arr[i] << endl;
	}
}
void print_vector(ostream& os,vector<int> v, int n)
{
	for(int i = 0; i < n; ++i)
	{
		os << v[i] << endl;
	}
}	
int main()			
{	int* a = new int[10];			
for(int i = 0; i < 10; ++i)
cout << arr[i] << " " << endl;
delete[] a;
cout << endl;	
cout << "Print array(10)" << endl;	
int* b = new int[10];
for(int i = 0; i < 10; ++i)
{
	Barr[i] = 100 + i;
}
print_array10(cout, b);
delete[] b;
cout << endl;
cout << "Print array(11)" << endl;
int* c = new int[11];
for(int i = 0; i < 11; ++i)
{
Carr[i] = 100 + i;
cout << Carr[i] << endl;
}
delete[] c;
cout << endl;
cout << "Print array(20)" << endl;
int* d = new int[20];
for(int i = 0; i < 20; ++i)
{
Darr[i] = 100 + i;
}
print_array(cout, d, 20);
		
delete[] d;
	
cout << endl;
	
cout << "Print vector(10)" << endl;
	
vector<int> vec;
for(int i = 0; i < 10; ++i)
{
vec.push_back(100+i);
}
print_vector(cout, vec, 10);
	
cout << endl;
	
cout << "Print vector(11)" << endl;
	
vector<int> vec2;
for(int i = 0; i < 11; ++i)
{
vec2.push_back(100+i);
}
print_vector(cout, vec2, 11);

cout << endl;

cout << "Print vector(20)" << endl;

vector<int> vec3;
for(int i = 0; i < 20; ++i)
{
vec3.push_back(100+i);
}
print_vector(cout, vec3, 20);
			
return 0;			
}