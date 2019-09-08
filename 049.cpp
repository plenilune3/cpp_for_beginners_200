#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < 5; i++)
        cout << "난수 : " << rand() << endl;

    return 0;
}
