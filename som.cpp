#include <iostream>

int main(){
    int eerste_getal, tweede_getal, som;
    std::cout << "Tel twee getallen bij elkaar op!" << std::endl;

    while (true){
        std::cout << "Eerste getal: " << std::endl;
        std::cin >> eerste_getal;
        if (std::cin.fail()){
            std::cout << "Verkeerde input! Gebruik alleen nummers!" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            break;
        }
    }
    
    while (true){
        std::cout << "Tweede getal: " << std::endl;
        std::cin >> tweede_getal;
        if (std::cin.fail()){
            std::cout << "Verkeerde input! Gebruik alleen nummers!" << std::endl;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    som = eerste_getal + tweede_getal;
    std::cout << "De twee getallen opgeteld is: " << som << std::endl;
    
    return 0;
}