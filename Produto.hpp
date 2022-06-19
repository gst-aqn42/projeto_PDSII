#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
#include <string>

struct descricao{
  std::string _nome; std::string _marca; std::string _volume;
};

class Produto{
private:
  int _cod_prod; double _preco_un; std::string _data_validade; std::string _lote;
  descricao _desc_prod; 
  
  static int cod_prod;
    
public:
  Produto(descricao _desc_prod, double preco_un, std::string lote, std::string data_validade);
  void reset_preço(double novo_preco);
  std::string get_validade() const;
  double get_preco() const;
  void print_dados() const;  
};
#endif