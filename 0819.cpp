#include <iostream>

int main()
{
    long long int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << 2 * ((a * b) + (b * c) + (c * a)) << " " << a * b * c << std::endl;
    return 0;
}
