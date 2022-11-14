// Lab_4_4.cpp
// Назаренко Софія 
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 24
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, R, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "          Value          " << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= 0)
            y = (-R / 6) * (x + 6);
        else
            if (0 < x && x <= R)
                y = -sqrt(R * R - x * x);
            else
                if (R < x && x <= 2 * R)
                    y = sqrt(R * R - (x - 2 * R) * (x - 2 * R));
                else
                    y = R;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}