#include <iostream>
using namespace std;

int main() {
    int year1, year2;

    cout << "Введіть перший рік: ";
    cin >> year1;
    cout << "Введіть другий рік: ";
    cin >> year2;

    // Перевірка на коректність введення
    if (year1 > year2) {
        cout << "Помилка: перший рік не може бути більшим за другий!" << endl;
        return 1;
    }

    int totalYears = 0, tenthYearCount = 0;

    for (int i = year1; i <= year2; ++i) {
        cout << "Рік: " << i << endl;
        totalYears++;

        if ((i - year1 + 1) % 10 == 0) {
            tenthYearCount++;
        }

        if (totalYears > 100) {
            cout << "Кількість років перевищує 100. Вихід із циклу." << endl;
            break;
        }
    }

    cout << "Загальна кількість років: " << totalYears << endl;
    cout << "Кількість кожного десятого року: " << tenthYearCount << endl;

    return 0;
}
