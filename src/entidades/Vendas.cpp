#include "/home/ozymandias/C++/projeto_PDSII/include/Vendas.hpp"
#include <ctime>
#include <iomanip>

int Vendas::_codigo_vendas = 1;
double Vendas::dinheiroEmCaixa = 0;

void Vendas::nova_venda(Cliente &primeiroDaFila){ 
  std::list<listaDeCompra>* compra =  (primeiroDaFila.lista_compras());
  std::list<listaDeCompra>::iterator it = compra->begin();
  double valorDaCompra = 0;
  while (it != compra->end()){
    _estoquePrincipal.reduzir_estoque(it->daLista.get_cod_prod(), it->qtd);
    valorDaCompra += (it->daLista.get_preco() * it->qtd);
    it++;
  }
  std::cout << "Sua compra é no valor de: " << valorDaCompra << " R$." <<std::endl;
  int dinheiroEspecie = 3;
  std::cout << "Digite o número referente a forma de pagamento" << std::endl; 
  std::cout << "0. Cartão" << std::endl;
  std::cout << "1. Dinheiro em espécie" << std::endl;
  std::cin >> dinheiroEspecie;
  while (dinheiroEspecie < 0 || 1 < dinheiroEspecie){
    std::cout << "Entre com um valor válido: " << std::endl;
    std::cin >> dinheiroEspecie;
  }
  
  cobranca(valorDaCompra, dinheiroEspecie);

  std::pair<int, Cliente> aux(_codigo_vendas, primeiroDaFila);
  _vendasCaixa.insert(aux);
  int codigoDaVenda = _codigo_vendas;
  _codigo_vendas++;

  std::cout << std::endl;
  std::cout << std::endl;
  
  imprimir_nota_fiscal(codigoDaVenda);
}

void Vendas::cobranca(double valorDaCompra, bool dinheiroEspecie){
  if (dinheiroEspecie){
    double valorRecebido = 0;
    double adicional = 0;
    std::cout << "Digite o valor recebido: ";
    std::cin >> valorRecebido;
    double troco = valorRecebido - valorDaCompra;
    if (0 > troco){
      std::cout << "O dinheiro não é seficiente, faltam: " << -troco << "R$." << std::endl;
      std::cout << "Digite a quantia adicional: ";
      std::cin >> adicional; 
      valorRecebido += adicional;
      valor_menor( valorDaCompra, valorRecebido);
    }else{
      if (troco > 0){
        std::cout << "O troco é de: " << troco << " R$." << std::endl;
        dinheiroEmCaixa += (valorRecebido - troco);
      }else{
        std::cout << "A quantia passada está correta." << std::endl;
      }
    }
  }else{
    bool transacaoAprovada = true; //A transação sempre será aprovada, pois as regras de validação de um cartão não entram no escopo destre trabalho
    std::cout << "Validação do cartão de crédito." << std::endl; //lançar uma exception para o cartão : retorno -> bool transaçãoAprovada.
    if (transacaoAprovada){
      dinheiroEmCaixa += valorDaCompra;
      std::cout << "Transação aprovada, retire o cartão" << std::endl;
    } 
  }
}

void Vendas::imprimir_nota_fiscal(int codigoVenda){
  double valorTotal = 0;
  int numProdutos = 0;
  std::map<int, Cliente>::iterator it = _vendasCaixa.find(codigoVenda);
  std::cout << std::fixed << std::showpoint;
  std::cout << std::setprecision(2);

  
  std::cout << "Supermercado Harrys & Deveaux" << std::endl;
  std::cout << "Bedford-Stuyvesant, 42 - New York - NY" << std::endl;
  std::cout << "CNPJ: 04.0613.0722/0001-01" << std::endl; //temporada 04 - ep 06 - minuto 13:07
  std::cout << "-----------------------------------------------------------------" << std::endl;
  time_t tt;
  struct tm *horaDaCompra;
  time (&tt);
  horaDaCompra = localtime(&tt);
  std::cout << asctime(horaDaCompra) << std::endl;
  std::cout << "CPF: " << it->second.get_CPF() << std::endl;
  std::cout << "-----------------------------------------------------------------" << std::endl;

  //lista de produtos comprados
  std::list<listaDeCompra> printLista = *(it->second.lista_compras());
  std::list<listaDeCompra>::iterator itr = printLista.begin();
  std::cout << "#|Código|Descrição|Valor Un|Quantidade|Valor total do item" << std::endl; 
  while (itr != printLista.end()){
    std::cout << numProdutos << " ";
    itr->daLista.print_dados();  
    std::cout << itr->qtd << "  " << (itr->qtd * itr->daLista.get_preco()) << "R$"<< std::endl;
    valorTotal += (itr->daLista.get_preco() * itr->qtd);
    numProdutos += itr->qtd;
    itr++;
  }

  std::cout << "QTD. TOTAL DE ITENS:" << '\t' << numProdutos << std::endl;
  std::cout << "VALOR TOTAL:" << '\t' << valorTotal << "R$" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}

double Vendas::fechamento_de_caixa(){
  double valorVendido;
  std::map<int, Cliente>::iterator it = _vendasCaixa.begin();
  while (it != _vendasCaixa.end()){
    std::list<listaDeCompra> lista = *(it->second.lista_compras());
    std::list<listaDeCompra>::iterator itr = lista.begin();
    while (itr != lista.end()){
      valorVendido += (itr->daLista.get_preco() * itr->qtd);
      itr++;
    }
    it++;
  }

  double diferenca = dinheiroEmCaixa - valorVendido;
  if (diferenca == 0.0){
    std::cout << "O valor em caixa está correto" << std::endl;
  }else{
    if (diferenca < 0.10){
      std::cout << "O valor em caixa está: " << -diferenca << " R$ a menos do que deveria." << std::endl;
    }else{
      std::cout << "O valor em caixa está: " << diferenca << " R$ a mais do que deveria." << std::endl;
    } 
  }
  return diferenca;
}

void Vendas::valor_menor(double valorDaCompra, double valorRecebido){
  double adicional = 0;
  double troco = valorRecebido - valorDaCompra;
  if (0 > troco){
    std::cout << "O dinheiro não é seficiente, faltam: " << -troco << "R$." << std::endl;
    std::cout << "Digite a quantia adicional: ";
    std::cin >> adicional; 
    valorRecebido += adicional;
    valor_menor(valorDaCompra, valorRecebido);
  }else{
    if (troco > 0){
      std::cout << "O troco é de: " << troco << " R$." << std::endl;
      dinheiroEmCaixa += (valorRecebido - troco);
    }else{
      std::cout << "A quantia passada está correta." << std::endl;
    }
  }
}

double Vendas::get_dinheiro_em_caixa(){
  return dinheiroEmCaixa;
}

Produto Vendas::get_produto_estoque(int codProd){
  return _estoquePrincipal.retorna_produto(codProd);
}

void Vendas::atribuir_estoque(Estoque estoque){
  _estoquePrincipal = estoque;
}