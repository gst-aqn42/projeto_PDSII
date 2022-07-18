#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>


class Funcionario{
  protected:
    int _cod_func; std::string _nome; std::string _funcao; double _comissao; static double _salario; 
    std::string _login; std::string _senha_acesso;
    static int _codigo_funcionario;
  public:
    virtual ~Funcionario() = default;
    virtual void cadastrar_funcionario(std::string nome, std::string funcao, std::string login, std::string senha_acesso);
    virtual void calcular_salario(std::string dia) = 0;
    void set_codigo_funcionario();
    void set_nome(std::string nome);
    void set_funcao(std::string funcao);
    void set_login(std::string login);
    void set_senha(std::string senha);
    int get_codigo_funcionario();
    std::string get_nome();
    std::string get_funcao();
    double get_salario();
    std::string get_login();
    std::string get_senha();
    void set_cod_fun_bd(int i); //metodo auxiliar para inicializar o codigo de funcionario a partir do carregamento do banco de daods em .csv
    void set_salario(double sal);
};

#endif