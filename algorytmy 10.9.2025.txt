#include <iostream>
using namespace std;

void zad1() {
    for (int i = 1; i <= 15; i++) {
        cout << i << endl;
    }
}

void zad2() {
    for (int i = 20; i >= 10; i--) {
        cout << i << endl;
    }
}

void zad3() {
    for (int i = 0; i < 10; i++) {
        cout << "Hubert" << endl;
    }
}

void zad4() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void zad5() {
    int x, y;
    cout << "Podaj wysokosc prostokata: ";
    cin >> x;
    cout << "Podaj szerokosc prostokata: ";
    cin >> y;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void zad6() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    zad1();
    cout << endl;

    zad2();
    cout << endl;

    zad3();
    cout << endl;

    zad4();
    cout << endl;

    zad5();
    cout << endl;

    zad6();

    return 0;
}
