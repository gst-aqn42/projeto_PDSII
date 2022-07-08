#include "Funcionario.hpp"


int Funcionario::_codigo_funcionario=0;
Funcionario::Funcionario(){}
Funcionario::Funcionario(std::string nome, std::string funcao){
  _nome = nome;
  _funcao = funcao;

  _codigo_funcionario++;
  _cod_func = _codigo_funcionario;
}

std::string Funcionario::get_funcao(){
  return _funcao;
}

std::string Funcionario::get_nome(){
  return _nome;
}

int Funcionario::get_cod_func(){
  return _cod_func;
}