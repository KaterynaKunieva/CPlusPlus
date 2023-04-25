#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int type, litres;
	double price_93=23, price_95=25, price_98=28, price_dizel=22, SUMM;
	cout << "Choose type: " << endl << "1-93" << endl << "2-95" << endl << "3-98" << endl << "4-dizel" << endl;
	cin >> type;
	cout << "Enter litres: " << endl;
	cin >> litres;
	switch (type)
	{
	case 1: 
	{SUMM = price_93 * litres; break;}
	case 2: 
	{SUMM = price_95 * litres; break;}
	case 3: 
	{SUMM = price_98 * litres; break;}
	case 4: 
	{SUMM = price_dizel * litres; break;}
	default:
	{cout << "Wrong number" << endl; break;}
	}
	cout << "SUMM = " << SUMM << endl;
	cout << "\n";
	system("pause");
	return 0;
}