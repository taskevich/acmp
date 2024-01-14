#include <iostream>

void calculateNewValues(int tempShirts, int tempResidues, int k, int priceShirt, int& newShirts, int& newResidues)
{
    if (tempResidues + k >= priceShirt)
    {
        newShirts = tempShirts + 1;
        newResidues = 0;
    }
    else
    {
        newShirts = tempShirts;
        newResidues = tempResidues + k;
    }
}

int main(int argc, char* argv[])
{
    int a, b, c, k;
    std::cin >> a >> b >> c >> k;

    // Массив футболок
    int*** shirtsArray = new int** [a + 1];
    for (int i = 0; i <= a; i++) {
        shirtsArray[i] = new int* [b + 1];
        for (int j = 0; j <= b; j++) {
            shirtsArray[i][j] = new int[c + 1];
        }
    }

    // Массив остатка (чтобы не изменять главный массив футболок)
    int*** residuesArray = new int** [a + 1];
    for (int i = 0; i <= a; i++) {
        residuesArray[i] = new int* [b + 1];
        for (int j = 0; j <= b; j++) {
            residuesArray[i][j] = new int[c + 1];
        }
    }

    for (int i = 0; i <= a; ++i)
    {
        for (int j = 0; j <= b; ++j)
        {
            for (int k1 = 0; k1 <= c; ++k1)
            {
                int cntShirtsAnswer = 0;
                int cntResiduesAnswer = 0;

                // проверка для крышек с 1 звездами
                if (i > 0)
                {
                    int tempShirts = shirtsArray[i - 1][j][k1];
                    int tempResidues = residuesArray[i - 1][j][k1];
                    int newShirts;
                    int newResidues;

                    calculateNewValues(tempShirts, tempResidues, 1, k, newShirts, newResidues);

                    if (newShirts > cntShirtsAnswer || (newShirts == cntShirtsAnswer && newResidues > cntResiduesAnswer))
                    {
                        cntShirtsAnswer = newShirts;
                        cntResiduesAnswer = newResidues;
                    }
                }

                // проверка для крышек с 2 звездами
                if (j > 0)
                {
                    int tempShirts = shirtsArray[i][j - 1][k1];
                    int tempResidues = residuesArray[i][j - 1][k1];
                    int newShirts;
                    int newResidues;

                    calculateNewValues(tempShirts, tempResidues, 2, k, newShirts, newResidues);

                    if (newShirts > cntShirtsAnswer || (newShirts == cntShirtsAnswer && newResidues > cntResiduesAnswer))
                    {
                        cntShirtsAnswer = newShirts;
                        cntResiduesAnswer = newResidues;
                    }
                }

                // проверка для крышек с 3 звездами
                if (k1 > 0)
                {
                    int tempShirts = shirtsArray[i][j][k1 - 1];
                    int tempResidues = residuesArray[i][j][k1 - 1];
                    int newShirts;
                    int newResidues;

                    calculateNewValues(tempShirts, tempResidues, 3, k, newShirts, newResidues);

                    if (newShirts > cntShirtsAnswer || (newShirts == cntShirtsAnswer && newResidues > cntResiduesAnswer))
                    {
                        cntShirtsAnswer = newShirts;
                        cntResiduesAnswer = newResidues;
                    }
                }

                shirtsArray[i][j][k1] = cntShirtsAnswer;
                residuesArray[i][j][k1] = cntResiduesAnswer;
            }
        }
    }

    std::cout << shirtsArray[a][b][c] << std::endl;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            delete[] shirtsArray[i][j];
        }
        delete[] shirtsArray[i];
    }
    delete[] shirtsArray;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            delete[] residuesArray[i][j];
        }
        delete[] residuesArray[i];
    }
    delete[] residuesArray;

    return 0;
}
