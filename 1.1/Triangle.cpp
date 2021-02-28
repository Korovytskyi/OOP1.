#include "Triangle.h"

bool Triangle::Init(int first, int second)
{
	if (first >= 0 && second >= 0)
	{
		kat1 = first;
		kat2 = second;
		return true;
	}
	else
	{
		kat1 = 0;
		kat2 = 0;
		return false;
	}
}
void Triangle::Read()
{
	int a, b;
	do {
		cout << "first katet: "; cin >> a;
		cout << "second katet: "; cin >> b;
		if (a < 0 || b < 0)
			cout << "Error" << endl;
	} while (!(Init(a, b)));

}
void Triangle::SetFirst(int value)
{
	if (value >= 0)
		kat1 = value;
	else
		kat1 = 0;
}
void Triangle::SetSecond(int value)
{
	if (value >= 0)
		kat2 = value;
	else
		kat2 = 0;
}
