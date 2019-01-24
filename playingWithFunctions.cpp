#include <iostream>
using namespace std;


void getInfo(int&, int&);
int sum(int, int);


int main()
{
	int var1, var2, tot1;

	getInfo(var1, var2);
	tot1 = sum(var1, var2);
	cout << tot1 << endl;


	return 0;

}


void getInfo(int& var1, int& var2)
{


	cout << "Enter in a number: " << endl;
	cin >> var1;
	cout << "Enter in a second number: " << endl;
	cin >> var2;
}

int sum(int A, int B)
{
	int total = 0;

	total = A + B;

	return total;
}

