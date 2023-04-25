#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int row, col, a; 
    cout << "Enter number of rows:"; //кількість рядків
    cin >> row;
    cout << "Enter number of cols:"; //кількість стовпців
    cin >> col;

    float** arr = new float* [row]; //динамічний двовимірний масив - це динамічний одновимірний масив динамічних одновимірних масивів

    for (int i = 0; i < row; i++)
    {
        arr[i] = new float[col];
    }
    
    cout<<"Do you want to fill the matrix by yourself? 1 - yes, another number - no: "; //масив можна зповнити самому або обрати варіант рандомного заповнення
    cin>>a;
    switch(a)
    {
        case 1:
        {
            cout<<"Enter element: "<<endl;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    cout<<i+1 <<" row and "<<j+1<< " column" <<": ";
                    cin>>arr[i][j];
                }
            }
        }
        break;
        default: 
        {
        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    arr[i][j] = rand() % 100;
                }
            }
        }
        break;
    }
    for (int i = 0; i < row; i++) //виводимо масив, який отримали
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++) //перероблюємо масив згідно умови, додаємо до індексів 1 для зручності користувача
    {
        for (int j = 0; j < col; j++)
        {
            if ((i+1) % 2 == 0 && (j+1) % 2 == 0) //обидва індекси парні
            {
                arr[i][j] = arr[i][j] / 2.0;
            }
            else if ((i+1) % 2 != 0 && (j+1) % 2 == 0) //i – непарний, j - парний
            {
                arr[i][j] = 2.0 * arr[i][j];
            }
            else if ((i+1) % 2 != 0 && (j+1) % 2 != 0) // i – непарний, j - непарний
            {
                arr[i][j] = 1.0 / arr[i][j];
            }
        }
    }

    //умову, коли значення елемента не змінюється, не прописуємо.
    cout << endl;
    cout << "New array\n"; //виводимо отриманий масив
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) //видаляємо
    {
        delete[]arr[i];
    }
    delete[]arr;
    system("pause");
    return 0;
}
