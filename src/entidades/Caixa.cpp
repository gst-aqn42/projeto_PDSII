#include "/home/ozymandias/C++/projeto_PDSII/include/Caixa.hpp"

bool Caixa::realizar_venda(Cliente &primeiroDaFila){
  bool limpar = false;
  int ler = 0;
  _desteCaixa.nova_venda(primeiroDaFila);
  std::cout << "Digite 1 para limpar a tela." << std::endl;
  std::cin >> ler;
  if (ler == 1){
    limpar = true;
  }else{
    // Chama a main do caixa
  }
  
  if (limpar){
    system("clear");
    // Chama a main do caixa
  }
  return 1;
}

Cliente Caixa::cadastrar_cliente(std::string CPF, std::string endereco){
  std::cout << "Insira o cpf e endereço do cliente: " << std::endl;
  Cliente primeiroDaFila(CPF, endereco);
  bool temProduto = true;
  while (temProduto){
    int codProd = 0;
    int qtd = 0;
    std::cout << "Insira o código do produto e a quantidade: " << std::endl;
    std::cin >> codProd;
    std::cin >> qtd;
    Produto prod = _desteCaixa.get_produto_estoque(codProd);
    primeiroDaFila.adicionar_produto_na_lista(prod, qtd);
    std::cout << "Deseja adicionar mais produtos a lista? (1)Sim (0)Não." << std::endl;
    std::cin >> temProduto;
  }
  return primeiroDaFila;
}

double Caixa::calcular_comissao(){
  if (_desteCaixa.fechamento_de_caixa() > 0){
    _comissao += (_desteCaixa.get_dinheiro_em_caixa()/100);
  }else{
    _comissao += (_desteCaixa.fechamento_de_caixa());
  }
  return _comissao;
}

void Caixa::calcular_salario(std::string dia){
  if (dia != "30"){
    _salario += calcular_comissao();
  }else{
    double salarioBase = 0;
    std::cout << "Digite o valor do salário base (R$): ";
    std::cin >> salarioBase;
    _salario += calcular_comissao() + salarioBase;
  }
}

double Caixa::dinheiro_do_caixa(){
  return _desteCaixa.get_dinheiro_em_caixa();
}

double Caixa::fechamento_caixa(){
  return _desteCaixa.fechamento_de_caixa();
}