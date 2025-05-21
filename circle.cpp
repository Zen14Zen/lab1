#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Функция для вычисления длины окружности
double calculateCircumference(double radius) {
    return 2 * M_PI * radius;
}

// Функция для вычисления площади круга
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Функция для вычисления площади кругового сектора
double calculateSectorArea(double radius, double angle) {
    return (M_PI * radius * radius * angle) / 360.0;
}

int main() {
    int choice;
    double radius, angle;
    
    cout << "Выберите действие:" << endl;
    cout << "1. Вычислить длину окружности" << endl;
    cout << "2. Вычислить площадь круга" << endl;
    cout << "3. Вычислить площадь кругового сектора" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Введите радиус окружности: ";
            cin >> radius;
            if (radius <= 0) {
                cout << "Ошибка: радиус должен быть положительным числом!" << endl;
                return 1;
            }
            cout << fixed << setprecision(4);
            cout << "Длина окружности: " << calculateCircumference(radius) << endl;
            break;
            
        case 2:
            cout << "Введите радиус круга: ";
            cin >> radius;
            if (radius <= 0) {
                cout << "Ошибка: радиус должен быть положительным числом!" << endl;
                return 1;
            }
            cout << fixed << setprecision(4);
            cout << "Площадь круга: " << calculateCircleArea(radius) << endl;
            break;
            
        case 3:
            cout << "Введите радиус круга: ";
            cin >> radius;
            if (radius <= 0) {
                cout << "Ошибка: радиус должен быть положительным числом!" << endl;
                return 1;
            }
            cout << "Введите центральный угол сектора (в градусах): ";
            cin >> angle;
            if (angle <= 0 || angle > 360) {
                cout << "Ошибка: угол должен быть в диапазоне (0, 360] градусов!" << endl;
                return 1;
            }
            cout << fixed << setprecision(4);
            cout << "Площадь кругового сектора: " << calculateSectorArea(radius, angle) << endl;
            break;
            
        default:
            cout << "Ошибка: неверный выбор!" << endl;
            return 1;
    }
    
    return 0;
}
