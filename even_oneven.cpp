#include <iostream>
#include <limits>

int main() {
    int cijfer;
    while (true) {
        std::cout <<"Voer een cijfer in!" << std::endl;
        std::cin >> cijfer;
        if (std::cin.fail()) {
            std::cout << "Voer alleen cijfers in" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    
    if (cijfer % 2 == 0) {
        std::cout <<"De cijfer is een even getal!" << std::endl;
    } else {
        std::cout <<"De cijfer is een oneven getal!" << std::endl;
    }
}