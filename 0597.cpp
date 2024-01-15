#include <iostream>

int main()
{
    int r1, r2, r3, d;
    std::cin >> r1 >> r2 >> r3;

    d = r2 * 2 + r3 * 2;

    if (r1 * 2 >= d)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
