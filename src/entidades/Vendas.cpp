#include "Vendas.hpp"
#include <ctime>


int Vendas::codigo_vendas = 1;
void Vendas::nova_venda(Estoque& estoquePrincipal, std::list<listaDeCompra> &compra, Cliente cliente){ 
  std::list<listaDeCompra>::iterator it = compra.begin();
  double valorDaCompra = 0;
  while (it != compra.end()){
    estoquePrincipal.reduzir_estoque(it->daLista.get_cod_prod(), it->qtd);
    valorDaCompra += it->daLista.get_preco();
    it++;
  }
  std::cout << "Sua compra é no valor de: " << valorDaCompra << " R$." <<std::endl;
  bool dinheiroEspecie = true;
  std::cout << "Digite o número referente a forma de pagamento" << std::endl; 
  std::cout << "0. Cartão" << std::endl;
  std::cout << "1. Dinheiro em espécie" << std::endl;
  std::cin >> dinheiroEspecie;
  cobranca(valorDaCompra, dinheiroEspecie);
  dinheiroEmCaixa += valorDaCompra;

  std::pair<int, std::list<listaDeCompra>> aux(codigo_vendas, compra);
  _vendasCaixa.insert(aux);
  codigo_vendas++;

  std::cout << std::endl;
  std::cout << std::endl;
  imprimir_nota_fiscal(cliente);
}

double Vendas::cobranca(double valorDaCompra, bool dinheiroEspecie){
  if (dinheiroEspecie){
    double valorRecebido;
    std::cin >> valorRecebido;
    double troco = valorRecebido - valorDaCompra;
    if (0 > troco){
      std::cout << "O dinheiro não é seficiente, faltam: " << -troco << "R$." << std::endl;
    }else{
      if (troco > 0){
        std::cout << "O troco é de: " << troco << " R$." << std::endl;
      }else{
        std::cout << "A quantia passada está correta." << std::endl;
      }
    }
  }else{
    bool transacaoAprovada = true; 
    std::cout << "Validação do cartão de crédito." << std::endl; //lançar uma exception para o cartão : retorno -> bool transaçãoAprovada.
    if (transacaoAprovada){
      std::cout << "Retire o cartão" << std::endl;
    } 
  }
}

void Vendas::imprimir_nota_fiscal(Cliente cliente){
int numProdutos = 1;

std::cout << "Supermercado Harrys & Deveaux" << std::endl;
std::cout << "Bedford-Stuyvesant, 42 - New York - NY" << std::endl;
std::cout << "CNPJ: 04.0613.0722/0001-01" << std::endl; //temporada 04 - ep 06 - minuto 13:07
std::cout << "----------------------------------------" << std::endl;
time_t tt;
struct tm *horaDaCompra;
time (&tt);
horaDaCompra = localtime(&tt);
std::cout << asctime(horaDaCompra) << std::endl;
std::cout << "CPF: " << cliente.get_CPF() << std::endl;
std::cout << "----------------------------------------" << std::endl;




}

void Vendas::fechamento_de_caixa(){
  double valorVendido;
  std::map<int, std::list<listaDeCompra>>::iterator it = _vendasCaixa.begin();
  while (it != _vendasCaixa.end()){
    std::list<listaDeCompra>::iterator itr = it->second.begin();
    while (itr != it->second.end()){
      valorVendido = itr->daLista.get_preco();
      itr++;
    }
    it++;
  }

  double diferenca = valorVendido - dinheiroEmCaixa;
  if (diferenca == 0.0){
    std::cout << "O valor em caixa está correto" << std::endl;
  }else{
    if (diferenca < 0.0){
      std::cout << "O valor em caixa está: " << -diferenca << " R$ a menos do que deveria." << std::endl;
    }else{
      std::cout << "O valor em caixa está: " << diferenca << " R$ a mais do que deveria." << std::endl;
    } 
  }
}