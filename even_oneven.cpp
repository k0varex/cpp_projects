#include <iostream>

int main() {
    int cijfer;
    std::cout <<"Voer een cijfer in!" << std::endl;

    std::cin >> cijfer;

    if (cijfer % 2 == 0) {
        std::cout <<"De cijfer is een even getal!" << std::endl;
    } else {
        std::cout <<"De cijfer is een oneven getal!" << std::endl;
    }
}