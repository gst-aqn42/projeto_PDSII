#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>
#include <map>
#include "Produto.hpp"


class Estoque{
private:
    std::map<std::string, Produto> estoque;

public:
    Estoque();
    void adicionar_estoque(std::string nome_produto, Produto &produto);
    void retirar_do_estoque(std::string lote);
    void verificar_vencidos(std::string data_vencimento);
    

};

#endif