#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string kMyjob = "developer";

	string question = "who are you : ";
	string answer = "my job is : ";

	cout << question << kMyjob << endl;
	cout << answer << kMyjob << endl;

	return 0;
}
