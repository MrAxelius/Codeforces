#include <iostream>
#include <array>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int pruebas = 0;
    std::cin >> pruebas;
    int resultado = 0;

    for (int i = 0; i < pruebas; ++i)
    {
        int contador = 0;
        for(int j = 0; j < 3; ++j){
            int quemar;
            std::cin >> quemar;
            if(quemar == 1){
                contador++;
            }
        }
        if(contador >= 2){
            resultado++;
        }
    }
    std::cout << resultado << std::endl;
    return 0;
}
