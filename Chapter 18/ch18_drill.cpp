#include "std_lib_facilities.h"
int Arr[10] = {};
void init_arr(){

for (int i = 0; i < sizeof(Arr); ++i)
{
	Arr[i] = pow(2,i);
}

}

void f(int array1[],int db){
	int la[10] = {};

	for (int i = 0; i < db; ++i)
	{
		la[i] = array1[i];
	}
	for(int i : la){

		cout << i << " ";
	}

	int* p = new int[db];

     cout << endl;
	for (int i = 0; i < db; ++i)
	{
		p[i] = array1[i];
	}

	for (int i = 0; i < db; ++i)
	{
		cout << p[i] << " ";
	}

	delete[] p;

}

int main(){

init_arr();

int Arr_size = sizeof(Arr)/sizeof(Arr[0]);


f(Arr,Arr_size);

cout <<endl;

int doubleArr[10] = {};
int doubleArr_size = sizeof(doubleArr)/sizeof(doubleArr[0]);

for (int i = 0; i < 10; ++i)
{
	doubleArr[i] = tgamma(i+1);
}

f(doubleArr,doubleArr_size);

return 0;	
}