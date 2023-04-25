#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string S; char S1[50];
	cout << "Enter the surname:\n"; 
	cin >> S;
	S.erase(1);
	cout << S;

	cout << "\nEnter name and surname with ;:\n";
	cin.getline(S1, 50, ';');
	cout << S1;

	cout << "\nPress any key";
	cin.get();
	return 0;
}