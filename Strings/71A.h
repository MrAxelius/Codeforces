#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int numero;
    std::cin >> numero;

    std::string actual;

    for (int i = 0; i < numero; ++i)
    {
        std::cin >> actual;
        if (!actual.size() > 10)
        {
            std::cout << actual << '\n';
        }
        else
        {
            std::cout << actual[0] << actual.size() - 2 << actual[actual.size() - 1] << '\n';
        }
    }
    return 0;
}