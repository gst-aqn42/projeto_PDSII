#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>


class Funcionario{
  private:
    int _cod_func; std::string _nome; std::string _funcao; double _salario; 
    double comissao;
    static int _codigo_funcionario;
  public:
    Funcionario(std::string nome, std::string funcao);
    Funcionario();
    std::string get_funcao();
    std::string get_nome();
    int get_cod_func();
};

#endif