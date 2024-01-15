#include <iostream>

int main()
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    for (int i = -100; i <= 100; ++i)
    {
        if ((a * i * i * i + b * i * i + c * i + d) == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}
