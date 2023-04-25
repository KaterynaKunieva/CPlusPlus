#include <iostream>
using namespace std;
int main()
{
    int rozmir, i, j, ires = 0, jres = 0;//���������� ������ rozmir - ����� ��������� �������, i, j - ������� �� ���������, ires, jres - ������� ������ ������ 
    cout << "Enter number of rows and cols:"; //��� ��������� � ���������
    cin >> rozmir;
    
    int ** arr = new int* [rozmir]; //��������� ����������� ������

    for (i = 0; i < rozmir; i++)
    {
        arr[i] = new int[rozmir];
    }
    cout << "Enter element: " << endl;//���� ����������
    for (i = 0; i < rozmir; i++)
    {
        for (j = 0; j < rozmir; j++)
        {
            cout << i + 1 << " row and " << j + 1 << " column" << ": ";
            cin >> arr[i][j];
        }
    }
    
    int** res = new int* [rozmir];//��������� ������� ������

    for (i = 0; i < rozmir; i++)
    {
        res[i] = new int[rozmir];
    }
    
    for (i = 0; i < rozmir; i++)//������������ �����
    {
        for (j = 0; j < rozmir; j++)
        {
            if (arr[i][j] >= 0)//����� ��� = 0
            {
                res[jres][ires] = arr[i][j];
                if (ires == rozmir-1)
                {
                    ires = 0;
                    jres++;
                }
                else
                    ires++;
            }
        }
    }

    for (i = 0; i < rozmir; i++)
    {
        for (j = 0; j < rozmir; j++)
        {
            if (arr[i][j] < 0)//����� 0
            {
                res[jres][ires] = arr[i][j];
                if (ires == rozmir-1)
                {
                    ires = 0;
                    jres++;
                }
                else ires++;
            }
        }
    }
    for (i = 0; i < rozmir; i++)//���������� ��������� ����� � ����������
    {
        for (j = 0; j < rozmir; j++)
        {
            arr[i][j] = res[i][j];
        }
    }
    cout << "New array\n"; //��������
    for (i = 0; i < rozmir; i++)
    {
        for (j = 0; j < rozmir; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (i = 0; i < rozmir; i++) //��������� ���������� �����
    {
        delete[]arr[i];
    }
    delete[]arr;
    for (i = 0; i < rozmir; i++) //��������� ������ �����
    {
        delete[]res[i];
    }
    delete[]res;
    system("pause");
    return 0;
}