#ifndef REPOSITOR_HPP
#define REPOSITOR_HPP

#include "Funcionario.hpp"
#include "Estoque.hpp"

class Repositor : public Funcionario{
private:
  std::string _login; std::string _senha_acesso;
public:
  void adicionar_novo_produto(Estoque &est, Produto &produto);
  void alterar_preco(Estoque &est, int cod_prod, double preco);
  void lotes_vencidos(Estoque &est, std::string data_atual);
  void remover_vencidos(Estoque &est, std::string lote);
  void alterar_senha(std::string senha_acesso); //Permite ao funcionário alterar sua senha, mas apenas se souber a atual
  double calcular_salario(double salario_base) override;
};

#endif

class ExceptionSenhaIncorreta{
};
