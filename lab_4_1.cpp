#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* arr = new int[size];
    int sum = 0;
    int dob = 1;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i << "]:" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            sum += arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
                swap(arr[i], arr[min]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[0] && arr[i] < arr[size - 1])
        {
            dob *= arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nsum=" << sum;
    cout << "\ndob=" << dob;
    cout << endl;
    system("pause");
    return 0;
}