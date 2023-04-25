#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
#define US 0
#define ENGLAND 1
#define FRANCE 2
#define COUNTRY US
#if COUNTRY == US
	char currency[] = "dollar";
#elif COUNTRY == ENGLAND
	char currency[] = "pound";
#else
	char currency[] = "franc";
#endif
	cout << currency;
	return 0;
}