#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y;
	double g;
	cout << "Enter x, y: " << endl;
	cin >> x >> y;
	g = (1 + cos(x + y)) * pow(x, 3) / (abs(exp(x) - (2 * y) / (1 + x * x * y * y))) + asin(y);
	cout << "g = " << g;
	cout << "\n";
	system("pause");
	return 0;
}