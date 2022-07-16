#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "Funcionario.hpp"
#include "Estoque.hpp"

class Caixa{
private:
  std::string _login; std::string _senha_acesso;
public:
  bool realizar_venda();
  void cadastrar_cliente();
};




#endif