#include <iostream>

using namespace std;

int main()
{
    double x = 5.7;
    int div1 = static_cast<int>(x / 5);
    double mod1 = x - 5 * static_cast<int>(x / 5);

    int y = 10;
    int div2 = static_cast<int>(y / 2);
    double mod2 = y % 2;

    cout << "5.7 / 5 = 몫 : " << div1 << ", 나머지 : " << mod1 << endl;
    cout << "10 / 2 = 목 : " << div2 << ", 나머지 : " << mod2 << endl;

    return 0;
}
