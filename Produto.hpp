#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
#include <string>

struct descricao{
  std::string _nome; std::string _marca; std::string _volume;
};

struct dadosLote{
  std::string _lote; std::string _data_validade; int _qtd;
};

class Produto{
  private:
    int _cod_prod; double _preco_un;  dadosLote _dados_prod;
    descricao _desc_prod; 
    
    static int codigo_do_produto;
      
  public:
    Produto(descricao desc_prod, double preco_un, dadosLote dados_prod);
    void reset_preço(double novo_preco);
    std::string get_validade() const;
    std::string get_lote() const;
    int get_qtd() const;
    void adc_prod(int qtd);
    void remover_prod(int qtd);
    double get_preco() const;
    void print_dados() const;
    int get_cod_prod() const;
};
#endif