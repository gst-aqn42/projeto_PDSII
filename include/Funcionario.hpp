#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>


class Funcionario{
  protected:
    int _cod_func; std::string _nome; std::string _funcao; double _salario; 
    double comissao;
    static int _codigo_funcionario;
  public:
    virtual void cadastrar_funcionario(std::string nome, std::string funcao);
    virtual double calcular_salario(double salario_base) = 0;
};

#endif