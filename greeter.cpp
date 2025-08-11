#include <iostream>
#include <string>

int main(){
    std::string naam;

    std::cout << "Hoe heet je?" << std::endl;
    std::cin >> naam;
    std::cout << "Hallo, " << naam << std::endl;
    
    return 0;
}