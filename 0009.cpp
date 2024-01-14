#include <iostream>

int main()
{
    int N, maxValue, minValue, sum = 0, mul = 1, maxIdx = 0, minIdx = 0;
    std::cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; ++i)
        std::cin >> arr[i];

    maxValue = arr[0];
    minValue = arr[0];

    for (int i = 0; i < N; ++i)
        if (arr[i] > 0)
            sum += arr[i];

    for (int i = 1; i < N; ++i) {
        if (maxValue < arr[i]) {
            maxValue = arr[i];
            maxIdx = i;
        }
        if (minValue > arr[i]) {
            minValue = arr[i];
            minIdx = i;
        }
    }

    if (minIdx > maxIdx)
        std::swap(minIdx, maxIdx);

    for (int i = minIdx + 1; i < maxIdx; ++i)
        mul *= arr[i];

    std::cout << sum << " " << mul << std::endl;
    return 0;
}
