#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << (std::max(a, b) + 1) / 2 << endl;
    cout << (std::min(a, b)) << endl;

    return 0;
}

