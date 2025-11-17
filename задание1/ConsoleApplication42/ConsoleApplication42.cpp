#include <iostream>

#define MODE 0

int main() {
    setlocale(LC_ALL, "Russian");
#ifndef MODE 
    std::cout << "Mode not initializate" << std::endl;

#else
#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
    void add(); {
        int a;
        int b;
        std::cout << "Введите первое число: " << std::endl;
        std::cin >> a;
        std::cout << "Введите второе число: " << std::endl;
        std::cin >> b;
        std::cout << "Результат: " << a + b << std::endl;
    }

#else 
    std::cout << "Неизвестный режим" << std::endl;
#endif
#endif

    return 0;
}