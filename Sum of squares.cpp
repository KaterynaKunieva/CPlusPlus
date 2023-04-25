#include <iostream>
using namespace std;
int main()
{
    int summ = 0;
    for (int i = 50; i <= 150; i++)
    {
        if (i % 4 == 0)
            summ += i*i;
    }
    cout << "Summ of squares = " << summ << endl;
    int i = 50;
    summ = 0;
    do {
        if (i % 4 == 0)
            summ += i*i;
        i++;
    } while (i <= 150);
    cout << "Summ of squares = " << summ << endl;
    i = 50;
    summ = 0;
    while (i <= 150)
    {
        if (i % 4 == 0)
            summ += i*i;
        i++;
    }
    cout << "Summ of squares = " << summ << endl;
    system("pause");
    return 0;
}