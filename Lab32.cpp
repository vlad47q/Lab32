// Lab32.cpp
// Скоропад Владислав
// Лабораторна робота № 3.
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double F, a, b, c, x;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 1 && c != 0) {
        F = a * pow(x, 2) + b / c;
    }
    if (x > 1.5 && c == 0) {
        F = (x - a) / (pow((x - c), 2));
    }
    if (!(x < 1 && c != 0) && !(x > 1.5 && c == 0)) {
        F = pow(x, 2) / pow(c, 2);
    }

    cout << "1) F = " << F << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 1 && c != 0) {
        F = a * pow(x, 2) + b / c;
    }
    else if (x > 1.5 && c == 0) {
        F = (x - a) / (pow((x - c), 2));
    }
    else {
        F = pow(x, 2) / pow(c, 2);
    }

    cout << "2) F = " << F << endl;

    return 0;
}