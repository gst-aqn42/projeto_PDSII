#ifndef REPOSITOR_HPP
#define REPOSITOR_HPP

#include "Funcionario.hpp"

class Repositor : public Funcionario{
private:
  
public:
  Repositor(std::string nome, std::string funcao);
  ~Repositor();
};

#endif