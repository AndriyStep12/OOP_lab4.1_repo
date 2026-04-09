#include <iostream>
#include <typeinfo>
#include "LinearEquation.h"
#include "QuadraticEquation.h"

using namespace std;

int main() {
    const int ARRAY_SIZE = 4;
    Equation* equations[ARRAY_SIZE];

    equations[0] = new LinearEquation(2, -4);
    equations[1] = new LinearEquation(0, 5);
    equations[2] = new QuadraticEquation(1, -3, 2);
    equations[3] = new QuadraticEquation(1, 2, 5);

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Справжній тип об'єкта: " << typeid(*equations[i]).name() << endl;
        cout << "Чи існують дійсні корені? " << (equations[i]->ExistsRoot() ? "Так" : "Ні") << "\n\n";
    }

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        delete equations[i];
    }

    return 0;
}