#include <iostream>
#include <limits>

int main(){
    double celsius;
    double fahrenheit;

    std::cout << "Zet Celsius om naar Fahrenheit: " << std::endl;

    while (true){ // programma gaat pas door als celsius wordt geïnitialiseerd.
        std::cout << "Celcius: " << std::endl;
        std::cin >> celsius;
        if(std::cin.fail()){
            std::cout << "Verkeerde input! Gebruik alleen getallen!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    fahrenheit = celsius * (9/5) + 32;

    std::cout << "Celsius (" << celsius << "C) omgezet naar Fahrenheit = " << fahrenheit << "F" << std::endl;

    return 0;
}