#include <string>
#include <iostream>

using namespace std;

int main()
{
    string my_country = "korea";
    string my_job = "developer";

    cout << "Country : " << my_country << endl;
    cout << "Job : " << my_job << endl;

    string my_info = my_country + ", " + my_job;

    cout << "My info : " << my_info << endl;

    return 0;
}
