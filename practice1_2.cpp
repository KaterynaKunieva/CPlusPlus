# include <iostream>
# include <math.h>

using namespace std;

int main()

{
	int x, y, z, f, t = 1;
	cout << "Enter x, y, z, f" << endl;
	cin >> x >> y >> z >> f;

	if (x == y && y == z && z == f)
	{
		t = 4;
	}
	else {
		if ((x == y && y == z) || (y == z && z == f) || (x == z && z == f))
		{
			t = 3;
		}
		else {
			if (x == y || x == z || x == f || y == z || y == f || z == f)
			{
				t = 2;
			}
			cout << t;
		}
	}
	cout << "\n";
	system("pause");
	return 0;
}