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
    if (currentYear - year < 18) {
        std::cout << "Бухалка не выросла!";
    }
    else if (currentYear - year > 18) {
        std::cout << "Можно";
    }
    else if (currentMonth > month || (currentMonth == month && currentDay > day)) {
        std::cout << "Можно";
    }
    else
    {
        std::cout << "Бухалка не выросла!";
    }
}
