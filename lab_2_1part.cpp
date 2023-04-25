#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x, y, g, max, min;
	cout << "Enter x, y" << endl;
	cin >> x >> y;
	max = (x > y) ? x : y;
	min = (x < y) ? x : y;
	g = (min - 2.0 * sqrt(max)) / (1.0 + max / min);
	cout << "g = " << g;
	cout << "\n";
	system("pause");
	return 0;
}