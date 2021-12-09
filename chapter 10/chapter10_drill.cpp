#include "../std_lib_facilities.h"

//1.
struct Point 
{
	int x;
	int y;
};

void printData(string vectorN, vector<Point> vector)
{
	cout << vectorN << "'s datas: " << endl;
	for(const auto& points:vector)
		cout << "(" << points.x << "," << points.y << endl;
}

int main()
{

try{
	//2.
	cout << "give 7 (x,y) values" << endl;
	char first, last, comma;
	int coord1, coord2;
	vector<Point> original_points ;	

	while(original_points.size()!=7)
	{
		cin >> first >> coord1 >> comma >> coord2 >> last;
		if(first != '(')
		 	error("it must start with '(' ") ; 
		if(!int(coord1))
		 	error("coord1 must be an int");
		if(comma != ',')
		 	error("don't forget the comma");
		if(!int(coord2))
			error("coord2 must be an int");
		if(last != ')')
			error("it must end with ')' ");

		Point p;
		if(first == '(' && int(coord1) && comma == ',' && int(coord2) && last==')')
		{
			p.x = coord1;
			p.y = coord2;
			original_points.push_back(p);
		}
	}

	
	
	//3.
	printData("original_points", original_points);
	
	//4.
	string outPutName = "GabiData.txt";
	ofstream ofile {outPutName};
	if(!ofile) error("Can't open ofile ", outPutName);
	for(const auto& points:original_points)
			ofile << "(" << points.x << "," << points.y <<")";
	ofile.close();

	//5.
	string inPutName = outPutName;
	ifstream ifile {inPutName};
	if(!ifile) error("Can't open initiliazer file", inPutName);
	vector<Point> p_points;

	Point p;
	while(ifile >> first >> coord1 >> comma >> coord2 >> last)
	{
		p.x = coord1;
		p.y = coord2;
		p_points.push_back(p);
	}
	ifile.close();
	
	//6.
	cout << "Vector elements " << endl;
	printData("Original points", original_points);
	printData("Process points ", p_points);

	//7.
	if(original_points.size() != p_points.size())
		cout << "something's wrong" << endl;


	return 0;
}
catch(exception& e)
{
	cerr << e.what()<< endl;
	return 1;
}
}