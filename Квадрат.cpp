#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, y, k1, k2, k3, k4, result, previousX;
    cin >> x;
    cin >> y;
    previousX = x - 0.1;

    k1 = 0.1 * 5 * x * y * exp(2 * x / y);
    k2 = 0.1 * 5 * (x + previousX / 2) * (y + k1 / 2) * exp(2 * (x + previousX / 2) / (y + k1 / 2));
    k3 = 0.1 * 5 * (x + previousX / 2) * (y + k2 / 2) * exp(2 * (x + previousX / 2) / (y + k2 / 2));
    k4 = 0.1 * 5 * (x + previousX) * (y + k3) * exp(2 * (x + previousX) / (y + k3));
    result = (k1 + 2 * k2 + 2 * k3 + k4) / 6 + y;
    cout << "k1= 0.1 * 5 * " << x << " * " << y << " * exp(2 * " << x << " / " << y << "); " << "k1=" << k1;
    cout << "\n";
    cout << "k2= 0.1 * 5 * (" << x + previousX / 2 << ") * " << (y + k1 / 2) << "* exp(2 * (" << x + previousX / 2 << ") / " << (y + k1 / 2) << "); k2=" << k2;
    cout << "\n";
    cout << "k3= 0.1 * 5 * (" << x + previousX / 2 << ") * " << (y + k2 / 2) << "* exp(2 * (" << x + previousX / 2 << ") / " << (y + k2 / 2) << "); k3=" << k3;
    cout << "\n";
    cout << "k4= 0.1 * 5 * " << (x + previousX) << "*" << (y + k3) << " * exp(2 * " << (x + previousX) << " / " << (y + k3) << "); k4=" << k4;
    cout << "\n";
    cout << "result=" << result;
    return 0;
}