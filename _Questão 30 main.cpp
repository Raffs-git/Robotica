#include <iostream>
#include "funcoes.h"
using namespace std;

int main() {
    int num = 5;

    funcValor(num);
    cout << "Depois funcValor, num = " << num << endl;

    funcReferencia(num);
    cout << "Depois funcReferencia, num = " << num << endl;

    funcPonteiro(&num);
    cout << "Depois funcPonteiro, num = " << num << endl;

    return 0;
}
