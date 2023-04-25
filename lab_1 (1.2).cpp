#include <iostream>
# include <math.h>

using namespace std;

int main()
{
	int a = 20, b = 10, c = 0;
	c = a + b;
	cout << "\na+b=" << c;
	c = a - b;
	cout << "\na-b=" << c;
	c = a * b;
	cout << "\na*b=" << c;
	c = a / b;
	cout << "\na/b=" << c;
	c = a % b;
	cout << "\na%2" << c;
	c = a++; 
	cout << "\na = " << a;
	cout << "\na++" << c;
	c = ++b;
	cout << "\n++b" << c;
	cout << "\nb = " << b;
	c = a--;
	cout << "\na--" << c;
	cout << "\na = " << a;
	c = --b;
	cout << "\n--b" << c;
	cout << "\nb = " << b;
	
	cout << "\nPress any key";
	cin.get();
		return 0;
}
