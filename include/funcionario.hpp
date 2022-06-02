#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>


class Funcionario{
  private:
    int _cod_func; std::string _nome; std::string _funcao;  
  public:
    Funcionario(std::string nome, std::string funcao);

  private:
    static int _codigo_funcionario;
};

#endif