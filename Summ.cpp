//��� �������. ������ �� n ����� �������� ������� ���� ���� ��������, ������������ �������� ��������� ��'������ ��������
//6   -8   15   9   -1   3   5   -10   12   2
#include <iostream>
#define n 20
using namespace std;
int main()
{
	int a[n], sum = 0, i, n1, iend, *pa;
	pa = &a[0];
	while (n1 == 0) //���������� ������� ����������, ������ �� 0
	{
		cout << "Enter integer value doesn`t equal 0: ";
		cin >> n1;
	}
	int* arr = new int[n1]; // �������� ���'��� ��� ������
	cout << "Enter element: " << endl; // ���������� �����
	for (i = 0; i < n1; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> *(pa+i);
	}
	for (i = 0; i < n1; i++)//�����
		cout << *(pa + i) << "\t";
	for (i = 0; i < n1; i++)
	{
		if (*(pa + i) < 0)//���� ������� �������������, �� ����������� ��� ��� �����
			iend = i;
	}
	for (i = iend + 1; i < n1; i++)//���� ����� �������� ����� ������ ���������� �������������� ����� +1. (�.�. ��������� �������)
		sum = sum + *(pa + i);//��������� ���� ������� � �����
	cout << "Summ = " << sum;//������� �����
	return 0;
}