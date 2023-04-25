# include <iostream>
# include <math.h>

using namespace std;

int main()

{
	double x, y, g; 
	cout << "Enter x, y" << endl;
	cin >> x >> y;
	if (x < y)
	{
		g = atan(abs(x) + y);
	}
	else {
		if (x > y)
		{
			g = atan(x + abs(y));
		}
		else {
			if (x == y)
			{
				g = pow(x + y, 2);
			}
		}
	}
	cout << "g = " << g;
	cout << "\n";
	system("pause");
	return 0;
}