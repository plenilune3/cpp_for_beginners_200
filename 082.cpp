#include <iostream>

using namespace std;

int main()
{
	int data1[3] = { 0, 1, 2 };
	
	data1[0] += 10;
	data1[1] = 100;
	data1[2] -= 2;

	cout << "== data ==" << endl;

	for(int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;

	return 0;
}

