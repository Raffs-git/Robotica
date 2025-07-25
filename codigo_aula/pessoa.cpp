#include "pessoa.hpp" 
#include <iostream> 
std:: string msg (std::string str)
{
    return str; 
}
void Pessoa::imprimir(std::string msg) const
{
   std::cout<< msg<< std::endl;
   imprimirNaTela();
}
void Pessoa::imprimir()const
{
 imprimirNaTela();
}

void Pessoa::imprimirNaTela()const
{
 std::cout<<nome<<idade<<std::endl;
}
