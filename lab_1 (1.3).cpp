#include <iostream>
# include <math.h>
using namespace std;
int main()
{
		double a = 1.50, b = 2.87, c = 0;
		c = a + b;
		cout << "\na+b = " << c;
		c = a - b;
		cout << "\na–b = " << c;
		c = a * b;
		cout << "\na*b = " << c;
		c = a / b;
		cout << "\na/b = " << c;
		c = a++;
		cout << "\na++" << c;
		cout << "\ta = " << a;
		c = ++b;
		cout << "\n++b" << c;
		cout << "\tb = " << b;
		c = a--;
		cout << "\na--" << c;
		cout << "\ta = " << a;
		c = --b;
		cout << "\n--b" << c;
		cout << "\tb = " << b;

		cout << "\nPress any key";
		cin.get();
		return 0;
	}
