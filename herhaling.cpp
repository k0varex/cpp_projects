#include <iostream>
#include <limits>

int main(){
    int eerste_getal, tweede_getal, som; //drie getallen hebben met elkaar te maken.

    std::cout << "Tel twee getallen bij elkaar op!" << std::endl;

    while(true){ //het programma gaat niet verder voordat het eerste getal gedeclareerd is.
        std::cout << "Eerste getal: " << std::endl;
        std::cin >> eerste_getal;

        if(std::cin.fail()){
            std::cout << "Verkeerde input! Gebruik alleen cijfers!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }            
    }

    while(true){ //het programma gaat niet verder voordat het tweede getal gedeclareerd is.
        std::cout << "Tweede: " << std::endl;
        std::cin >> tweede_getal;

        if(std::cin.fail()){
            std::cout << "Verkeerde input! Gebruik alleen cijfers!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }          
    }

    som = eerste_getal + tweede_getal;
    std::cout << "De twee getallen bij elkaar opgeteld is: " << som << std::endl;
}