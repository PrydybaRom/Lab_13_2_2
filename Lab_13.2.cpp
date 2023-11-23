#include <Windows.h>
#include <iostream>
#include <cmath>

using namespace std;

#define TRICUTNUK(a, b, c) ((a + b > c) && (a + c > b) && (b + c > a))
#define TRAPECIA(h) (h > 0)


// ����������� ����� ����������
#define PLOCHA_TRICUTNUKA(a, b, c) \
    do { \
        double s = (a + b + c) / 2.0; \
        double area = sqrt(s * (s - a) * (s - b) * (s - c)); \
        cout << "����� ����������: " << area << endl; \
    } while(0)


// ����������� ����� ��������
#define PLOCHA_TRAPECIA(base1, base2, height) \
    do { \
        double area = ((base1 + base2) / 2.0) * height; \
        cout << "����� ��������: " << area << endl; \
    } while(0)


int main() {

    SetConsoleOutputCP(1251);

    double a, b, c, base1, base2, height;

    cout << "������ ������� ����� ���������� (a, b, c): " << endl;

    cout << "������ ������� �: "; cin >> a;
    cout << "������ ������� b: "; cin >> b;
    cout << "������ ������� �: "; cin >> c;


    
    if (TRICUTNUK(a, b, c)) {
        PLOCHA_TRICUTNUKA(a, b, c);
    } else {
        cout << "������ �������� �� ��������� ���������." << endl;
        cout << "������ ������ �������� �� �� ������: " << endl;
        cout << "������ ������� �: "; cin >> base1;
        cout << "������ ������� b: "; cin >> base2;
        cout << "������ ������: "; cin >> height;
        
        
        if (TRAPECIA(height)) {
            PLOCHA_TRAPECIA(base1, base2, height);
        } else {
            cout << "������ �������� �� ��������� �������� ��� ������ �����������." << endl;
        }
    }

    return 0;
}
