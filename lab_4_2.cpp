#include <iostream>
using namespace std;

int main()
{
	int num = 0; //������� �������� ������, ���� ���������� �� ��� ���� ����������
	int flag = 0; //���� ����, �� ���� ���������
	int dob = 1; //������� ���� �� ������
	int k = 0;//�����, ��� ���� = 1, ���� ������� �������� ������ ������� (������� �������� �� �������� ����� ���� �� 1 �����), � ���������� 0 - ���� �����
	int even = 0, odd = 0; // ������� ��� ������� ������ � ���������
	int maxI, i; //������ ������������� �� ������
	double element, max; //������� ������, ������������ �������
	while (num == 0) //���������� ������� ����������, ������ �� 0
	{
		cout << "Enter integer value doesn`t equal 0: ";
		cin >> num;
	}
	int* arr = new int[num]; // �������� ���'��� ��� ������
	cout << "Enter element: " << endl; // ���������� �����
	for (i = 0; i < num; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> element;
		*(arr+i) = element;
	}
	for (i = 0; i < num; i++) //�������� ��������� �����
	{
		cout << *(arr+i) << ", ";
	}
	max = *arr; //������������ ��������� ������ �������
	for (i = 1; i < num; i++) //������ ������������ ������� 
	{
		if (*(arr+i) > max) 
		{
			max = *(arr+i);
		}
	}
	for (i = 0; i < num; i++) //������ ������� ������������ ��������
	{
		if (*(arr+i) == max)
		{
			cout << endl << "Number of maximum = " << i + 1 << endl;
		}
	}
	for (i = 0; i < num; i++) //������ ���
	{
		if (*(arr+i) == 0 && flag == 0) //������� = 0 (������� 0), ���� = 0 (�� ����� ���� �� ����)
		{
			if (*(arr+i+1) == 0) // ��������� ������� ���� 0 - ��� 0 
			{
				dob = 0;
				cout << "There are no numbers between nulls" << endl;
				break;
			}
			flag = 1; // ������� ������ 0, ������� ���� = 1
		}
		else if (*(arr+i) != 0 && flag == 1) //������� �� ������� 0, ������ 0 ��������� 
		{
			dob = dob * (*(arr+i)); //����������� �� �����, ���� �������� �� ��������� 0 
		}
		else if (*(arr+i) == 0 && flag == 1) //�������� �������, ����=1 ������, �� ������ ���� ��� ��� ��������� 
		{
			flag = 2;//���� ������� ���� = 2, �� ���� ����, �� �� ������� ������ ����
		}
	}
	if (dob != 0 && flag == 2) cout << endl << "dob = " << dob << endl; //������� 2 ����, �� ���� � �����
	else if (flag == 0 && dob != 0) cout << "No nulls" << endl; //�� ������� ������� ����
	else if (flag == 1) cout << "No enough nulls" << endl;//� ����� 1 ����
	//������������ ����� ����� �����, ��� � ������ �������� ��������������� ��������, �� ������ � �������� ��������, � � ����� � �� ������ � ������ ��������.
	if (num % 2 != 0) k = 1;
	int* array_even = new int[(num / 2)];
	int* array_odd = new int[(num / 2) + k];
	for (i = 0; i < num; i++)//����������� �������� ��������� ������ �� 2 ����� ������ � ��������� �� �� �������
	{
		if ((i + 1) % 2 == 0) //������ 1, ��� ����������� ���� �������� �������, �� ���� ������� (��������� ��� ����� � 1)
		{
			*(array_even + even) = *(arr+i);//��� ������	
			even++;
		}
		else//��� ��������
		{
			*(array_odd + odd) = *(arr + i); //array_odd[odd] 
			odd++;
		}
	}
	for (i = 0; i < odd; i++)//�������� �� �������� ����� ��������� � �������� �����
	{
		*(arr+i) = *(array_odd+i); 
	}
	for (i = 0; i < even; i++)//�������� �� ������ ����� ��������� � �������� ����� ���� ��������
	{
		*(arr+i + odd) = *(array_even+i); 
	}
	for (i = 0; i < num; i++)//�������� �����
	{
		cout << *(arr+i) << ", "; 
	}
	delete[] arr; // ������� ���'��
	delete[] array_even;
	delete[] array_odd;
	return 0;
}