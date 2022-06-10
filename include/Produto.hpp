#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
#include <string>


class Produto{
private:
    int _cod_prod; double _preco; int _qtd; std::string _data_validade; std::string _data_reposicao; 
    std::string _tipo_produto; std::string _nome_produto;
    static int cod_prod;
    
public:
    Produto(double preco, int qtd, std::string data_validade, std::string data_reposicao, 
    
    std::string tipo_produto, std::string nome_produto);
    void reset_preço(double novo_preco);
    void insert_qtd(int nova_qtd);
    std::string get_data_reposicao();
    std::string get_data_validade();
    double get_preco();
    void print_dados();

    
};
#endif