#include <iostream>
#include "calculator.h"
using namespace std;

void printHelloMir();

int main() {

    printHelloMir();

    Calculator calc;
    cout << "Add: " << calc.Add(3.4, 2.1) << endl;
    cout << "Sub: " << calc.Sub(5.5, 2.2) << endl;
    cout << "Mul: " << calc.Mul(4.5, 2.5) << endl;
    cout << "Div: " << calc.Div(5.0, 2.5) << endl;
    cout << "Pow: " << calc.Pow(3.0, 2.0) << endl;
    return 0;
}
