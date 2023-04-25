#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double y, f; int x, a, b;

	cout << "Enter x, a and b: " << endl;
	cin >> x >> a >> b;
	if(x<=0)
	{
		y = a - pow(b, x + 1); f = pow(M_E, tan(a * x + 1));
	}
	else
	{
		if (0 < x <= 3)
		{
			y = (1 + pow(3, x * a)); f = pow(x, 2) - pow(sin(x), b) * x;
		}
		else
		{
			if (x > 3)
			{
				y = 1 / (tan(a * x + 1)); f = pow(x, 2 / 5);
			}
		}
	}
	cout << "y = " << y << endl << "f = " << f;
	return 0;
}
