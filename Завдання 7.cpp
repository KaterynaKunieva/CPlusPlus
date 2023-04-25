#include <iostream>
using namespace std;
int main()
{
    int row = 10, colum;
    while (row >= 1)
    {
        colum = 1;
        while (colum <= 10)
        {
            cout << (row % 2 ? "<" : ">");
            ++colum;
        }
        --row;
        cout << endl;
    }
    return 0;
}