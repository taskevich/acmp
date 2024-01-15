#include <iostream>

int main()
{
    float w, h, r, d;
    std::cin >> w >> h >> r;

    d = r * 2;

    if (w >= 1e9 || h >= 1e9 || r >= 1e9)
    {
        std::cout << "NO" << std::endl;
    }
    else
    {
        std::cout << (d <= w && d <= h ? "YES" : "NO") << std::endl;
    }

    return 0;
}
