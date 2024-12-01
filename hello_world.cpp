#include <iostream>

// Основная функция программы
int main() {
    // Запрос имени пользователя
    std::string name;
    std::cout << "Введите ваше имя: ";
    std::cin >> name;
    // Вывод приветствия
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
