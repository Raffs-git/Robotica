#include <string>
#ifndef PESSOA_HPP
#define PESSOA_HPP
struct Pessoa
{
    std::string nome;
    int idade;
    void imprimir (std::string msg) const;
    void imprimir () const; //parametros diferentes () 
    //por isso que pode usar o mesmo nome
    private:
    void imprimir (std::string msg) const;
};
#endif //PESSOA_HPP
