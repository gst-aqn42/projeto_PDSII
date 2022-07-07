#ifndef REPOSITOR_HPP
#define REPOSITOR_HPP

#include "Funcionario.hpp"
#include "Estoque.hpp"

class Repositor : public Funcionario{
private:
  
public:
  Repositor(std::string nome, std::string funcao);
  void alterar_preco(Estoque &est, int cod_prod, double preco);
};

#endif