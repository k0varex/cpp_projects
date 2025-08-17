#include <iostream>
#include <limits>

int main(){
    double rekening;
    int fooi;
    double totaal;

    std::cout << "Bereken de fooi!" << std::endl;

    while (true){
        std::cout << "Wat is de rekening?" <<std::endl;
        std::cin >> rekening;
        if(std::cin.fail()){
            std::cout << "Gebruik alleen getallen!" <<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }  

    while (true){
        std::cout << "Hoeveel fooi wil je geven?" << std::endl;
        std::cin >> fooi;
        if (std::cin.fail()){
            std::cout << "Gebruik alleen getallen!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    
    totaal = rekening * (1 + (fooi/100));

    std::cout << "De totaalrekening met fooi is: " << totaal << std::endl;;
    
    return 0;
}