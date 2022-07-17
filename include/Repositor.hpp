#ifndef REPOSITOR_HPP
#define REPOSITOR_HPP

#include "Funcionario.hpp"
#include "Estoque.hpp"
#include "Exceptions.hpp"

class Repositor : public Funcionario{
private:
  Estoque _estoquePrincipal;
public:
  Repositor();
  ~Repositor();
  void adicionar_novo_produto(Produto produto);// adicione um novo produto
  void alterar_preco(int cod_prod, double preco); // altere o preço de um produto de acordo com seu código
  void lotes_vencidos(std::string data_atual); // Contsule se há produtos vencidos pela data atual
  void remover_vencidos(std::string lote); // Remova um produto pelo seu lote
  void alterar_senha(std::string senha_acesso); //Permite ao funcionário alterar sua senha, mas apenas se souber a atual
  void calcular_salario(std::string dia) override;//Entre apenas com o dia do mês
  Estoque referencia_estoque();
};

#endif
