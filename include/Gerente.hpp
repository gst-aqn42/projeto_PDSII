#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Caixa.hpp"
#include "Repositor.hpp"
#include "Funcionario.hpp"
#include <map>

class Gerente : public Funcionario{
private:
  std::map <int, Repositor*> _repositor; std::map <int, Caixa*> _caixa; Estoque _estoquePrincipal; std::map<int, Gerente*> _gerente;
public:
    Gerente(std::string nome, std::string funcao, std::string login, std::string senha);
    Gerente();
    ~Gerente();
    void cadastrar_funcionario(std::string nome, std::string funcao, std::string login, std::string senha_acesso) override;
    void exibir_salario(std::string dia);
    void desvincular_funcionario(std::string funcao,int codFunc);
    void reset_senha(std::string funcao, int codFunc);
    double balanco_dos_caixas();
    void calcular_salario(std::string dia) override; //voltar aqui
    void balaco_do_estoque();//voltar aqui
    bool verifica_map_repositor();
    bool verifica_map_caixa();
    bool verifica_map_gerente();
    //void adicionar_funcionarios_do_banco(int codFuncionario, std::string nome, std::string funcao, double salario, std::string login, std::string senha);
    Caixa* retorna_caixa(int i);
    Repositor* retorna_repositor(int i);
    Gerente* retorna_gerente(int i);
};
#endif