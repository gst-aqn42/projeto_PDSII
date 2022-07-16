#ifndef VENDAS_HPP
#define VENDAS_HPP
#include <list>
#include "Produto.hpp"
#include "Estoque.hpp"
#include "Cliente.hpp"
#include <map>

class Vendas{
private:
  std::map<int,Cliente> _vendasCaixa; static int _codigo_vendas; static double dinheiroEmCaixa;
public:
  void nova_venda(Estoque& estoquePrincipal, Cliente &primeiroDaFila);//reduz o estoque, chama a cobrança, calcula o troco e imprime a nota fiscal
  double cobranca(double valorDaCompra, bool dinheiroEspecie); // Calcula o valor da compra, escolhe a opção dinheiro ou cartão e faz o calculo de troco se necesário
  void imprimir_nota_fiscal(int codigoVenda); //Imprime a lista de produtos da mesma forma que uma nota de supermercado comum
  int fechamento_de_caixa(); // calcula o total de vendas do caixa e se o valor bate com o que têm em caixa
  void valor_menor(double valorDaCompra, double valorRecebido); //Método chamado para o tratamento de valores insuficientes para compra
  
};

#endif