#include <iostream>
#include <iomanip>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
	int k;
	float x;
	const double M_PI = 3.1415926;
	double å = 0.00001, r = 0.00;
	double prod, prcs;
	for (x = (-1) * M_PI / 2; x <= 3 * M_PI / 2; x += M_PI / 10)
	{
		k = 0; prod = 1;
		r = 1 - (4 * x * x) / (pow((2 * k + 1), 2) * pow(M_PI, 2));
		prcs = prod;
		prod = prod * r;
		prcs = prcs - prod;
		while (fabs(prcs) > å)
		{
			k++;
			r = 1 - (4 * x * x) / (pow((2 * k + 1), 2) * pow(M_PI, 2));
			prcs = prod;
			prod = prod * r;
			prcs = prcs - prod;
		}
		cout << endl<< "cos(" << setprecision(2) << x << ") = " << setprecision(2) << prod;
	}
cout << "\n";
system("pause");
return 0;
}