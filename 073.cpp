#include <iostream>

using namespace std;

int g_number = 100;

int Func1()
{
	return g_number++;
}

int Func2()
{
	return g_number++;
}

int main()
{
	int number = g_number++;

	cout << "메인 number : " << number << endl;
	cout << "Func1 number : " << Func1() << endl;
	cout << "Func2 number : " << Func2() << endl;

	return 0;
}
