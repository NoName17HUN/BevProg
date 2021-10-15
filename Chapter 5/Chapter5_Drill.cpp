#include "std_lib_facilities.h"
int main()
try {
//My version of the Code
	Cout << "Success!\n";
	cout << "Success!\n";
	cout << "Success" << "!\n",
	cout << "success" << '\n';
	int res = 7; 
	vector<int> v[10]; 
	v[5] = res;
	cout << "Success!\n";
	vector<int> v[10]; 
	v[5] = 7; 
	if (v[5]!=7) cout << "Success!\n";
	bool cond=true;
	if (cond) cout << "Success!\n"
	else cout << "Fail!\n";
	bool c = true; 
	if (c) cout << "Success!\n"
	else cout << "Fail!\n";
	string s = "ape"; 
	bool d=true;
	string c = "fool"+s; 
	if (d=="foolape") cout << "Success!\n";
	string s = "ape"; 
	if (s=="fool") cout << "Success!\n";	
	string s = "ape"; if (s=="fool") cout << "Success!\n";
	s=c;
	string s = "ape"; if (s+"fool") cout << "Success!\n";
	vector<char> v[5]; 
	for (int i=0; 0<v.size(); ++i) cout << "Success!\n";
	vector<char> v[5]; 
	for (int i=0; i<=v.size(); ++i) cout << "Success!\n";
	string s = "Success!\n"; 
	for (int i=0; i<6; ++i) cout << s[i];
	if (true) cout << "Success!\n"
	else cout << "Fail!\n";
	int x = 2000;
	string c = (string)x;
	if (c=="2000") cout << "Success!\n";
	vector<string> s[10] = "Success!\n"; 
	for (int i=0; i<10; i++) cout << s[i];
	vector<string> v[5]; 
	for (int i=0; i<=v.size(); i++) cout << "Success!\n";
	int i=0; int j = 9; while (j<10) ++j
	if (j<i) cout << "Success!\n";
	int x = 2; double d = 5/(x–2)
	if (d==2*x+0.5) cout << "Success!\n";
	string<char> s = "Success!\n",
    for (int i=0; i<=10; ++i) cout << s[i];
	int i=0; while (i=0; i<10; ++j) 
	if (j<i) cout << "Success!\n";
	int x = 4; double d = 5/(x–2);
	if (d=2*x+0.5) cout << "Success!\n";
	cin << "Success!\n";

keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}



