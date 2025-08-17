#include <iostream>
#include <limits>
#include <string>
#include <sstream>
#include <iomanip>

std::string calculatePrice(double rekening, double percentage);
std::string printMenu();

int main(){
    double rekening;
    int keuze;
    double percentage;

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
        std::cout << printMenu();

        std::cin >> keuze;
        
        if(keuze == 1) {
            std::cout << calculatePrice(rekening, 0.2) << std::endl;
            break;
        } else if (keuze == 2) {
            std::cout << calculatePrice(rekening, 0.3) << std::endl;
            break;
        } else if (keuze == 3) {
            std::cout << calculatePrice(rekening, 0.4) << std::endl;
            break;
        } else if (keuze == 4) {
            while(true){
                std::cout << "Vul je percentage in: " <<std::endl;
                std::cin >> percentage;

                if(std::cin.fail()){
                    std::cout << "Gebruik alleen getallen!" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    break;
                }
            }
            std:: cout << calculatePrice(rekening, percentage) << std::endl;
            break;            
        } else if (keuze > 4){
            std::cout << "Kies enkel uit het menu." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        } else {
            break;
        }
    }
    return 0;
}

std::string calculatePrice(double rekening, double percentage){
    double totaal{rekening * (1 + (percentage/100))};
    std::ostringstream prijs;

    prijs << std::fixed << std::setprecision(2);
    prijs << "De totaalrekening met fooi is: " << totaal;

    return prijs.str();
}

std::string printMenu(){
    return "Hoeveel fooi wil je geven?\n"
            "1. 20%\n"
            "2. 30%\n"
            "3. 40%\n"
            "4. Eigen percentage\n";
}