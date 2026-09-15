#include <iostream>
#include <string>
 
std::string problema(int kilos)
{
    if(kilos % 2 == 0 && kilos > 2){
        return "YES";
    }else{
        return "NO";
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int kilos;
    std::cin >> kilos;
 
    std::cout << problema(kilos) << std::endl;
    return 0;
 
}