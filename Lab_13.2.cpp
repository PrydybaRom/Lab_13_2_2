#include <Windows.h>
#include <iostream>
#include <cmath>

using namespace std;

#define TRICUTNUK(a, b, c) ((a + b > c) && (a + c > b) && (b + c > a))
#define TRAPECIA(h) (h > 0)


// Знаходження площі трикутника
#define PLOCHA_TRICUTNUKA(a, b, c) \
    do { \
        double s = (a + b + c) / 2.0; \
        double area = sqrt(s * (s - a) * (s - b) * (s - c)); \
        cout << "Площа трикутника: " << area << endl; \
    } while(0)


// Знаходження площі трапеції
#define PLOCHA_TRAPECIA(base1, base2, height) \
    do { \
        double area = ((base1 + base2) / 2.0) * height; \
        cout << "Площа трапеції: " << area << endl; \
    } while(0)


int main() {

    SetConsoleOutputCP(1251);

    double a, b, c, base1, base2, height;

    cout << "Введіть довжину сторін трикутника (a, b, c): " << endl;

    cout << "Введіть сторону а: "; cin >> a;
    cout << "Введіть сторону b: "; cin >> b;
    cout << "Введіть сторону с: "; cin >> c;


    
    if (TRICUTNUK(a, b, c)) {
        PLOCHA_TRICUTNUKA(a, b, c);
    } else {
        cout << "Введені значення не утворюють трикутник." << endl;
        cout << "Введіть основи трапеції та її висоту: " << endl;
        cout << "Введіть сторону а: "; cin >> base1;
        cout << "Введіть сторону b: "; cin >> base2;
        cout << "Введіть висоту: "; cin >> height;
        
        
        if (TRAPECIA(height)) {
            PLOCHA_TRAPECIA(base1, base2, height);
        } else {
            cout << "Введені значення не утворюють трапецію або висота неправильна." << endl;
        }
    }

    return 0;
}
