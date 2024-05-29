#include <iostream>
using namespace std;
#include <windows.h>
// ��������� ��� �������� �������
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// ������������� ������� swap() ��� ���� int
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// ������������� ������� swap() ��� ���� Time
void swap(Time& t1, Time& t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}

// ������������� inline-������� ��� ������ �������� ���� int
inline void print(int value) {
    cout << value << endl;
}

// ������������� inline-������� ��� ������ �������� ���� Time
inline void print(Time value) {
    cout << value.hours << ":" << value.minutes << ":" << value.seconds << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    // �������� ���������� ���� int � Time
    int x = 10, y = 20;
    Time t1 = { 9, 30, 10 }, t2 = { 15, 45, 15 };

    // ����� ������� swap() ��� ���� int
    cout << "�� ������������: x = ";
    print(x);
    cout << "�� ������������: y = ";
    print(y);
    swap(x, y);
    cout << "����� ������������: x = ";
    print(x);
    cout << "����� ������������: y = ";
    print(y);

    // ����� ������� swap() ��� ���� Time
    cout << "�� ������������: t1 = ";
    print(t1);
    cout << "�� ������������: t2 = ";
    print(t2);
    swap(t1, t2);
    cout << "����� ������������: t1 = ";
    print(t1);
    cout << "����� ������������: t2 = ";
    print(t2);

    return 0;
}