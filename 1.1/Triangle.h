#pragma once
#include <iostream>

using namespace std;

class Triangle
{
private:
	int kat1;
	int kat2;
public:
	int hypotenuse() { return sqrt((kat1 * kat1) + (kat2 * kat2)); };
	int GetFirst() const { return kat1; };
	int GetSecond() const { return kat2; };
	bool Init(int first, int second);
	void SetFirst(int value);
	void SetSecond(int value);
	void Display() const { cout << "Katet1= " << kat1 << " Katet2= " << kat2 << endl; };
	void Read();
};
