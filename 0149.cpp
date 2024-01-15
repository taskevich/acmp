#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int* arr = new int[N + 1] {};

    for (int i = 1; i < N + 1; ++i)
        std::cin >> arr[i];

    for (int i = N; i > 0; --i)
        std::cout << arr[i] << " ";

    return 0;
}
