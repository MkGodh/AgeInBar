#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int currentDay;
    int currentMonth;
    int currentYear;
    int day;
    int month;
    int year;

    std::cout << "Добро пожаловать в бар Синяя борода!\n";
    std::cout << "Введите сегодняшний день, месяц и год: "; std::cin >> currentDay >> currentMonth >> currentYear;
    std::cout << "Введите ваш день, месяц и год рождения: "; std::cin >> day >> month >> year;
    if (currentYear - year >= 18 && month <= currentMonth && currentDay - day >= 1) {
        std::cout << "Зачем тебе пиво? Выпей лучше Текиллу!";
    }
    else {
        std::cout << "Бухалка не выросла! Пей сок браток!";
    }
}

