#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "Funcionario.hpp"
#include "Estoque.hpp"
#include "Vendas.hpp"

class Caixa : public Funcionario{
private:
  Vendas _desteCaixa;
public:
  bool realizar_venda(Cliente &primeiroDaFila);
  Cliente cadastrar_cliente(std::string CPF, std::string endereco);
  double calcular_comissao();
  void calcular_salario(std::string dia) override;
  double dinheiro_do_caixa();
  double fechamento_caixa();
};




#endif