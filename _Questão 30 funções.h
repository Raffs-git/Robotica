#pragma once
#include <iostream>
using namespace std;

// Passagem por valor
void funcValor(int x) {
    cout << "Passagem por valor: " << x << endl;
}

// Passagem por referência
void funcReferencia(int& x) {
    x += 10;
    cout << "Passagem por referencia: " << x << endl;
}

// Passagem por ponteiro
void funcPonteiro(int* x) {
    if (x != nullptr) {
        *x += 20;
        cout << "Passagem por ponteiro: " << *x << endl;
    }
}
