#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    cout << "Enter n:";
    cin >> n;

    int** arr = new int* [n];
    int** mas = new int* [n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mas[i][j] = arr[i][j];
        }
    }


    int max = arr[0][0];
    int temp;
    for (int i = 0; i < n; i++)
    {
        max = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }


        }
        cout << "max=" << max << endl;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                temp = mas[i][j];
                mas[i][j] = max;
                max = temp;
            }
        }
    }


    cout << endl;
    cout << "New array\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[]arr[i];
        delete[]mas[i];
    }
    delete[]arr;
    delete[]mas;

    system("pause");
    return 0;
}