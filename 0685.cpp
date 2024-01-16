#include <iostream>

int main()
{
    int a1, a2, a3, b1, b2, b3, temp;
    std::cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    
    if (a1 < a2)
        std::swap(a1, a2);

    if (a2 < a3)
        std::swap(a2, a3);

    if (a1 < a2)
        std::swap(a1, a2);

    if (b1 < b2)
        std::swap(b1, b2);

    if (b2 < b3)
        std::swap(b2, b3);

    if (b1 < b2)
        std::swap(b1, b2);

    std::cout << a1 * b1 + a2 * b2 + a3 * b3 << std::endl;

    return 0;
}
