#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP

#include <string>
#include <map>
#include "Produto.hpp"


class Estoque{
private:
    std::map<int, Produto> estoque;

public:
    Estoque();
    void adicionar_estoque(int cod_prod , Produto &produto);
    void retirar_do_estoque(std::string lote);
    std::string verificar_vencidos(std::string data_vencimento); //Recebe o lote dos produtos vencidos

    

};
#endif