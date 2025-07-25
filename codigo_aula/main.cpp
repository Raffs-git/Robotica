#include <iostream>
#include "pessoa.hpp"

using namespace std;
int main ()
{
    cout <<"\n\n\n Digite o nome da pessoa: ";
    string nome= "";
    getline (std::cin, nome);
    cout << "\n Digite a idade da pessoa: ";
    int idade= 0;
    cin >> idade;
    Pessoa p1= {nome, idade};
    cout <<endl;
    return 0;
}
