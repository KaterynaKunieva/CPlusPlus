# include <iostream>
# include <math.h>

using namespace std;

int main()

{
	double z1, z2, alpha;
	const double PI = 3.141592653589793;
	z1 = z2 = alpha = 0;
	cout << "\nEnter alpha:\n";
	cin >> alpha;
	z1 = powf(cosf(3.0 * PI / 8.0 - alpha / 4.0), 2) - powf(cosf(11.0 * PI / 8.0 + alpha / 4.0), 2);
	z2 = sqrt(2.0) / 2.0 * sin(alpha / 2.0);
	cout << z1 << endl;
	cout << z2 << endl;
	
	cout << "\nPress any key";
	cin.get();
		return 0;
}