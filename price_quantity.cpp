#include <iostream> 

int main(){
    double prijs{0.99};
    double aantal{6};
    double kosten{prijs * aantal};

    std::cout << "Prijs: " << prijs << std::endl;
    std::cout << "Aantal: " << aantal << std::endl;
    std::cout << "Kosten: " << kosten << std::endl;

    return 0;
}