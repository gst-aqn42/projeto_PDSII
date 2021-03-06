#ifndef VENDAS_HPP
#define VENDAS_HPP

#include <list>
#include "Produto.hpp"
#include "Estoque.hpp"
#include "Cliente.hpp"
#include <map>

class Vendas{
private:
  Estoque _estoquePrincipal; std::map<int,Cliente> _vendasCaixa; static int _codigo_vendas; static double dinheiroEmCaixa;
public:
  void nova_venda(Cliente &primeiroDaFila);//reduz o estoque, chama a cobrança, calcula o troco e imprime a nota fiscal
  void cobranca(double valorDaCompra, bool dinheiroEspecie); // Calcula o valor da compra, escolhe a opção dinheiro ou cartão e faz o calculo de troco se necesário
  void imprimir_nota_fiscal(int codigoVenda); //Imprime a lista de produtos da mesma forma que uma nota de supermercado comum
  double fechamento_de_caixa(); // calcula o total de vendas do caixa e se o valor bate com o que têm em caixa
  void valor_menor(double valorDaCompra, double valorRecebido); //Método chamado para o tratamento de valores insuficientes para compra
  double get_dinheiro_em_caixa(); //retorna o valor em caixa
  Produto get_produto_estoque(int codProd); // retorna um produto no estoque
  void atribuir_estoque(Estoque estoque); //atribui um estoque passado por parâmetro para o estoque principal
};
#endif