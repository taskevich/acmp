#include <iostream>

int main()
{
    int N;
    std::cin >> N;

	switch (N)
	{
	case 1:
	case 12:
	case 2:
		std::cout << "Winter" << std::endl;
		break;
	case 3:
	case 4:
	case 5:
		std::cout << "Spring" << std::endl;
		break;
	case 6:
	case 7:
	case 8:
		std::cout << "Summer" << std::endl;
		break;
	case 9:
	case 10:
	case 11:
		std::cout << "Autumn" << std::endl;
		break;
	default:
		std::cout << "Error" << std::endl;
		break;
	}

    return 0;
}
