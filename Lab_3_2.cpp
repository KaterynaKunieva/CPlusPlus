#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, sqrt_prv, sqrt_nxt, y, expr;
	double p=2, e=0.001;
	for (x = 0; x <= 0.9; x += 0.1)
	{
		expr = 1 - x * x;
		sqrt_prv = expr;
		sqrt_nxt = (1 / p)*((p - 1) * sqrt_prv + expr / pow(sqrt_prv, p - 1));
		while (fabs(sqrt_nxt - sqrt_prv) > e)
		{
			sqrt_prv = sqrt_nxt;
			sqrt_nxt = (1 / p)*((p - 1) * sqrt_prv + expr / pow(sqrt_prv, p - 1));
			y = sqrt_nxt / x;
		}
		cout<< "For x = " << x << " " << "y = " << y << endl;
	}
	cout << "\n";
	system("pause");
	return 0;
}