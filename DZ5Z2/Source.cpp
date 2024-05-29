#include <iostream>
using namespace std;
#include <windows.h>
// Структура для хранения времени
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Перегруженная функция swap() для типа int
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Перегруженная функция swap() для типа Time
void swap(Time& t1, Time& t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}

// Перегруженная inline-функция для вывода значения типа int
inline void print(int value) {
    cout << value << endl;
}

// Перегруженная inline-функция для вывода значения типа Time
inline void print(Time value) {
    cout << value.hours << ":" << value.minutes << ":" << value.seconds << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    // Создание переменных типа int и Time
    int x = 10, y = 20;
    Time t1 = { 9, 30, 10 }, t2 = { 15, 45, 15 };

    // Вызов функции swap() для типа int
    cout << "До перестановки: x = ";
    print(x);
    cout << "До перестановки: y = ";
    print(y);
    swap(x, y);
    cout << "После перестановки: x = ";
    print(x);
    cout << "После перестановки: y = ";
    print(y);

    // Вызов функции swap() для типа Time
    cout << "До перестановки: t1 = ";
    print(t1);
    cout << "До перестановки: t2 = ";
    print(t2);
    swap(t1, t2);
    cout << "После перестановки: t1 = ";
    print(t1);
    cout << "После перестановки: t2 = ";
    print(t2);

    return 0;
}