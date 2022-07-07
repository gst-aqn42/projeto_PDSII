#include "Vendas.hpp"


int Vendas::codigo_vendas = 1;
void Vendas::nova_venda(Estoque& estoquePrincipal, std::list<listaDeCompra> &compra){ 
  std::list<listaDeCompra>::iterator it = compra.begin();
  double valorDaCompra = 0;
  while (it != compra.end()){
    estoquePrincipal.reduzir_estoque(it->daLista.get_cod_prod(), it->qtd);
    valorDaCompra += it->daLista.get_preco();
  }

}

double cobranca(double valorDaCompra, bool dinheiroEspecie){
  
}

void imprimir_nota_fiscal(){

}

int Vendas::fechamento_de_caixa(){

}