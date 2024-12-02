#include <iostream>

// The main function of the program
int main() {
    // User Name Request
    std::string name;
    std::cout << "Введите ваше имя: ";
    std::cin >> name;
    // The output of the greeting
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
