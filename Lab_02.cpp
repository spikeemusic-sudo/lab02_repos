// Перша зміна для перевірки git
// Lab_02.cpp
// <Фащевський Богдан>
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 28

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y; // вхідні параметри
    double z1;   // результат обчислення 1-го виразу
    double z2;   // результат обчислення 2-го виразу

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Обчислення z1 та z2 згідно з варіантом 28
    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
    z2 = sin(y + x) * sin(y - x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get();
    return 0;
}