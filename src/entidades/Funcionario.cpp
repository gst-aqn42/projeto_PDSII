#include "/home/ozymandias/C++/projeto_PDSII/include/Funcionario.hpp"

int Funcionario::_codigo_funcionario = 1;
double Funcionario::_salario = 0;

Funcionario* Funcionario::cadastrar_funcionario(std::string nome, std::string funcao, std::string login, std::string senha_acesso){
return nullptr;
}

void Funcionario::set_codigo_funcionario(){
  _cod_func = _codigo_funcionario;
  _codigo_funcionario++;
}

void Funcionario::set_nome(std::string nome){
  _nome = nome;
}

void Funcionario::set_funcao(std::string funcao){
  _funcao = funcao;
}

void Funcionario::set_login(std::string login){
 _login = login; 
}

void Funcionario::set_senha(std::string senha){
  _senha_acesso = senha;
}

int Funcionario::get_codigo_funcionario(){
  return _cod_func;
}

std::string Funcionario::get_nome(){
  return _nome;
}

double Funcionario::get_salario(){
  return _salario;
}

std::string Funcionario::get_funcao(){
  return _funcao;
}

std::string Funcionario::get_login(){
  return _login;
}

std::string Funcionario::get_senha(){
  return _senha_acesso;
}