#include "/home/ozymandias/C++/projeto_PDSII/include/Gerente.hpp"

Gerente::Gerente(std::string nome, std::string funcao, std::string login, std::string senha){
  this->_nome = nome;
  this->_cod_func = _codigo_funcionario;
  _codigo_funcionario++;
  this->_funcao = funcao;
  this->_login = login;
  this->_senha_acesso = senha;
}

Gerente::Gerente(){
}

Gerente::~Gerente(){
  //(Voltar Aqui)grava os dados em .csv e depois desaloca os ponteiros da pilha.
}

Funcionario* Gerente::cadastrar_funcionario(std::string nome, std::string funcao, std::string login, std::string senha){
  if (funcao == "caixa"){
    Caixa* novoCaixa = new Caixa;
    novoCaixa->set_codigo_funcionario();
    novoCaixa->set_nome(nome);
    novoCaixa->set_funcao(funcao);
    novoCaixa->set_login(login);
    novoCaixa->set_senha(senha);

    std::pair<int, Caixa*> aux(novoCaixa->get_codigo_funcionario(), novoCaixa);
    _caixa.insert(aux);
    return novoCaixa;
  }else{
    if (funcao == "repositor"){
      Repositor* novoRepositor = new Repositor;
      novoRepositor->set_codigo_funcionario();
      novoRepositor->set_nome(nome);
      novoRepositor->set_funcao(funcao);
      novoRepositor->set_login(login);
      novoRepositor->set_senha(senha);

      std::pair<int, Repositor*> aux(novoRepositor->get_codigo_funcionario(), novoRepositor);
      _repositor.insert(aux);
      return novoRepositor;
    }else{
      if (funcao == "gerente")
      {
        Gerente* novoGerente = new Gerente;
        novoGerente->set_codigo_funcionario();
        novoGerente->set_nome(nome);
        novoGerente->set_funcao(funcao);
        novoGerente->set_login(login);
        novoGerente->set_senha(senha);
        
        std::pair<int, Gerente*> aux(novoGerente->get_codigo_funcionario(), novoGerente);
        _gerente.insert(aux);
        return novoGerente;
      }
    }
  }
  return nullptr;
}

void Gerente::exibir_salario(std::string dia){
  if (dia == "30"){
    std::cout << "Os salários do mês dos caixas são: " << std::endl;
    std::map<int, Caixa*>::iterator it = _caixa.begin();
    while (it != _caixa.end()){
      std::cout << it->second->get_nome() << ": " << it->second->get_salario() << "R$" << std::endl;
      it++;
    }
    
    std::cout << "Os salários do mês dos repositores são: " << std::endl;
    std::map<int, Repositor*>::iterator itr = _repositor.begin();
    while (itr != _repositor.end()){
      std::cout << itr->second->get_nome() << ": " << itr->second->get_salario() << "R$" << std::endl;
      itr++;
    }

    std::cout << "Os salários do mês dos gerentes são: " << std::endl;
    std::map<int, Gerente*>::iterator iter = _gerente.begin();
    while (iter != _gerente.end()){
      std::cout << iter->second->get_nome() << ": " << iter->second->get_salario() << "R$"<< std::endl;
      itr++;
    }
  }else{
    std::cout << "Os salários parciais do mês dos caixas são: " << std::endl;
    std::map<int, Caixa*>::iterator it = _caixa.begin();
    while (it != _caixa.end()){
      std::cout << it->second->get_nome() << ": " << it->second->get_salario() << std::endl;
      it++;
    }
    
    std::cout << std::endl;
    std::cout << "Os salários parciais do mês dos repositores são: " << std::endl;
    std::map<int, Repositor*>::iterator itr = _repositor.begin();
    while (itr != _repositor.end()){
      std::cout << itr->second->get_nome() << ": " << itr->second->get_salario() << std::endl;
      itr++;
    }

    std::cout << "Os salários parciais do mês dos gerentes são: " << std::endl;
    std::map<int, Gerente*>::iterator iter = _gerente.begin();
    while (iter != _gerente.end()){
      std::cout << iter->second->get_nome() << ": " << iter->second->get_salario() << "R$"<< std::endl;
      itr++;
    }
  }
}

void Gerente::desvincular_funcionario(std::string funcao, int codFunc){
  if (funcao == "caixa"){
    std::map<int, Caixa*>::iterator it = _caixa.find(codFunc);
    if (it->second->get_codigo_funcionario() == codFunc){
      _caixa.erase(codFunc);
    }else{
      std::cout << "Funcionário não encontrado na lista de funcionários" << std::endl;
    }
  }else{
    if (funcao == "repositor"){
      std::map<int, Repositor*>::iterator itr = _repositor.find(codFunc);
      if (itr->second->get_codigo_funcionario() == codFunc){
        _repositor.erase(codFunc);
      }else{
        std::cout << "Funcionário não encontrado na lista de funcionários" << std::endl;
      }
    }else{
      int opcao = 2;
      std::cout << "Por favor, aperte 1 e depois entre com uma função válida ou aperte 0 e saia da função" << std::endl;
      std::cin >> opcao;
      while (opcao < 0 || opcao > 1){
        std::cout << "Por favor, entre com um valor válido: " << std::endl;
        std::cin >> opcao;
      }
      if (opcao == 1){
        std::string func;
        int codFun = 0;
        std::cout << "Digite a função e o código do funcionário: " << std::endl;
        std::cin >> func;
        std::cin >> codFun;
        desvincular_funcionario(func, codFun);
      }
    }
  }
}

void Gerente::reset_senha(std::string funcao, int codFunc){
  if (funcao == "caixa"){
    std::map<int, Caixa*>::iterator it = _caixa.find(codFunc);
    if (it->second->get_codigo_funcionario() == codFunc){
      std::string novaSenha;
      std::cout << "Digite sua nova senha:" << std::endl;
      std::cin >> novaSenha;
      it->second->set_senha(novaSenha);
    }else{
      std::cout << "Funcionário não encontrado na lista de funcionários" << std::endl;
    }
  }else{
    if (funcao == "repositor"){
      std::map<int, Repositor*>::iterator itr = _repositor.find(codFunc);
      if (itr->second->get_codigo_funcionario() == codFunc){
        std::string novaSenha;
        std::cout << "Digite sua nova senha:" << std::endl;
        std::cin >> novaSenha;
        itr->second->set_senha(novaSenha);
      }else{
        std::cout << "Funcionário não encontrado na lista de funcionários" << std::endl;
      }
    }else{
      if (funcao == "gerente"){
        std::map<int, Gerente*>::iterator it = _gerente.find(codFunc);
        if (it->second->get_codigo_funcionario() == codFunc){
          std::string novaSenha;
          std::cout << "Digite sua nova senha:" <<std::endl;
          std::cin >> novaSenha;
          it->second->_senha_acesso = novaSenha;
        }else{
          std::cout << "Funcionário não encontrado na lista de funcionários" << std::endl;
        }
      }
    }
  }
}

double Gerente::balanco_dos_caixas(){
  double totalCaixas = 0;
  double totalVendido = 0;
  double diff = 0;
  std::map<int, Caixa*>::iterator it = _caixa.begin();
  while (it != _caixa.end()){
    totalCaixas += it->second->dinheiro_do_caixa();
    totalVendido += it->second->fechamento_caixa();
    it++;
  }
  diff = (totalCaixas - totalVendido);
  if (diff>=0){
    std::cout << "Balanço positivo" << std::endl;
  }else{
    std::cout << "Balanço negativo" << std::endl;
  }
  return diff;
}

bool Gerente::verifica_map_repositor(){
  return _repositor.empty();
}

bool Gerente::verifica_map_caixa(){
  return _caixa.empty();
}

bool Gerente::verifica_map_gerente(){
  return _gerente.empty();
}

void Gerente::calcular_salario(std::string dia){
  
}