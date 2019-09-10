#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(NULL);
    tm* ptm = localtime(&now);

    char buffer[128];
    strftime(buffer, 128, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%P)\n", ptm);

    cout << buffer;

    return 0;
}
