#include <iostream>
#include <limits>

int main(){
    double rekening;
    int fooi;
    double eigen_percentage;
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
        std::cout << "1. 20%" << std::endl;
        std::cout << "2. 30%" << std::endl;
        std::cout << "3. 40%" << std::endl;
        std::cout << "4. Eigen percentage" << std::endl;

        std::cin >> fooi;
        
        if(fooi == 1) {
            std::cout << "De totaalrekening met fooi = " << rekening * 1.2 << std::endl;
            break;
        } else if (fooi == 2) {
            std::cout << "De totaalrekening met fooi = " << rekening * 1.3 << std::endl;
            break;
        } else if (fooi == 3) {
            std::cout << "De totaalrekening met fooi = " << rekening * 1.4 << std::endl;
            break;
        } else if (fooi == 4) {
            while(true){
                std::cout << "Vul je percentage in: " <<std::endl;
                std::cin >> eigen_percentage;
                if(std::cin.fail()){
                    std::cout << "Gebruik alleen getallen!" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                } else {
                    break;
                }
            }
            std:: cout << "De totaal rekening met fooi = " << rekening * (1 + (eigen_percentage/100)) << std::endl;
            break;            
        } else if (fooi > 4){
            std::cout << "Kies enkel uit het menu." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
 
    return 0;
}