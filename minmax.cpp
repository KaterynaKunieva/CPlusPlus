# include <iostream>
# include <math.h>

using namespace std;

int main()

{
int x, y, z, f, max = 0, min = 0, max1 = 0, min1 = 0, max2 = 0, min2 = 0;
cout << "Enter x, y, z, f" << endl;
cin >> x >> y >> z >> f;

// шукаємо максимум:
if (x > y)
{
	max1 = x;
}
else { max1 = y; }
if (z > f)
{
	max2 = z;
}
else { max2 = f; }
if (max1 > max2)
{
	max = max1;
}
else { max = max2; }
cout << "max = " << max;

// шукаємо мінімум:
if (x < y)
{
	min1 = x;
}
else { min1 = y; }
if (z < f)
{
	min2 = z;
}
else { min2 = f; }

if (min1 < min2)
{
	min = min1;
}
else { min = min2; }
cout << "\nmin = " << min;

cout << "\nPress any key";
cin.get();
return 0;
}