#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    float l = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    if (r1 + r2 >= l && l + r1 >= r2 && l + r2 >= r1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
