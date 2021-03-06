#include <iostream>
using namespace std;

#define pi 3.14

double Perimeter(double radius)
{
    double perimeter = 2 * pi * radius;
    return perimeter;
}

double Area(double radius)
{
    double area = pi * radius * radius;
    return area;
}

int main()
{
    setlocale(LC_ALL, "rus");

    double x, y, r;

    cout << "Введите координаты и радиус круга:\n";
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "R: ";
    cin >> r;

    if (r < 0) {
        cout << "\nРадиус должен быть положительным\n"
             << "\nНажмите любую клавишу чтобы выйти\n";
        cin.get();
        cin.get();
        return 0;
    }

    cout << "\nCircle(" << x << " " << y << ", " << r << ")\n";
    cout << "Area: " << Area(r) << endl;
    cout << "Perimeter: " << Perimeter(r) << endl;

    cout << "\nНажмите любую клавишу чтобы выйти\n";
    cin.get();
    cin.get();
    return 0;
}