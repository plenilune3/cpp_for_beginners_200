#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    bool is_x = true;
    bool is_y = false;

    if (is_x == true && is_y == true)
        cout << "is_x && is_y = " << "true" << endl;
    else
        cout << "is_x && is_y = " << "false" << endl;

    if (x == 10 || is_x == false)
        cout << "x가 10이거나 is_x가 true입니다." << endl;
    else
        cout << "x는 10이 아니며 is_x도 false가 아닙니다." << endl;

    if (!is_y)
        cout << "is_y 원래 값은 false입니다." << endl;
    else
        cout << "is_y 원래 값은 true입니다." << endl;

    return 0;
}
