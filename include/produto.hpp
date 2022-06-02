#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>
#include "tipo_produto.hpp"

class produto
{
private:
    int _codigo; double _preco; int _qtd; std::string _data_validade; std::string _data_reposicao; int cod_func;
    std::string _tipo_produto;
public:
    produto(/* args */);
    ~produto();
};

produto::produto(/* args */)
{
}

produto::~produto()
{
}



#endif