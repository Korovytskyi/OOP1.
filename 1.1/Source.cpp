

#include <Windows.h>
#include <iostream>
#include "Triangle.h"



Triangle makeTriangle(unsigned int kat1, unsigned int kat2)
{
	Triangle bb;
	if (!bb.Init(kat1, kat2))
	{
		cout << "error" << endl;
		cout << "________________________________________" << endl;
	}
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	Triangle b;
	b.Read();
	b.Display();
	cout << "hypotenuse: " << b.hypotenuse() << endl;
	cout << "________________________________________" << endl;

}
