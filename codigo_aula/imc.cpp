//Magreza =18.5; normal= 24.9; sobrepeso= 29.9; 
//obesidade =30.0; aplicativo c++ USANDO CONSTANTES
// que mostre o imc, com if else.
#include <iostream>
using namespace std;
int main ()
{
    const double Magreza =18.5;
    const double Medio= 24.9;
    const double Sobrepeso= 29.9;
    const double Obesidade =30.0;
    double peso, altura;
    //entrada de dados e calculo

    cout<<"Informe seu peso";
    cin>>peso;
    cout<<"Informe sua altura";
    cin>>altura;
    double imc = peso / (altura * altura);

   
    if (imc < Magreza) {
        cout << "Seu IMC é " << imc << " - Magreza\n";
    } else if (imc <= Medio) {
        cout << "Seu IMC é " << imc << " - Peso normal\n";
    } else if (imc <= Sobrepeso) {
        cout << "Seu IMC é " << imc << " - Sobrepeso\n";
    } else if (imc >= Obesidade) {
        cout << "Seu IMC é " << imc << " - Obesidade\n";
    }
    return 0;
}
