#include <iostream>
using namespace std;

int main() {
    int var1, var2;

    cout << "Введіть перше число: ";
    cin >> var1;
    cout << "Введіть друге число: ";
    cin >> var2;

    // Виведення адрес змінних
    cout << "Адреса var1: " << &var1 << ", Адреса var2: " << &var2 << endl;

    cout << "Числа від var1 до var2 зі знаком мінус:" << endl;
    for (int i = var1; i <= var2; ++i) {
        cout << -i << " ";
    }
    cout << endl;

    return 0;
}
